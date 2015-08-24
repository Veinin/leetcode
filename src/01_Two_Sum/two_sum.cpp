/**
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they add up to the target,
 * where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 * 
 * You may assume that each input would have exactly one solution.
 * 
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 */
class Solution {
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			map<int, int> record;
			vector<int> ret;

			for(int i = 0; i < numbers.size(); i++) {
				int temp = target - numbers[i];
				if(record.find(temp) != record.end()) {
					ret.push_back(record[temp] + 1);
					ret.push_back(i + 1);
					break;
				} else {
					record[numbers[i]] = i;
				}
			}

			return ret;
		}
};
/**
 * Follow up for "Remove Duplicates":
 * What if duplicates are allowed at most twice?
 *
 * For example,
 * Given sorted array nums = [1,1,1,2,2,3],
 *
 * Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
 */
class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {
			if(nums.size() <= 2)
				return nums.size();

			for(int i = 2; i < nums.size(); ) {
				if(nums[i] == nums[i -1] && nums[i] == nums[i -2])
					nums.erase(nums.begin() + i);
				else
					i++;
			}

			return nums.size();
		}
};

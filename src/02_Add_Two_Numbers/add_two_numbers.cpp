/**
 * You are given two linked lists representing two non-negative numbers. The digits are stored in 
 * reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */
class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			int a = 0, b = 0, sum = 0, carry = 0;
			ListNode *head = NULL, **t = &head;

			while(l1 != NULL || l2 != NULL) {
				a = getValueAndMoveNext(l1);
				b = getValueAndMoveNext(l2);

				sum = a + b + carry;
				ListNode *node = new ListNode(sum % 10);
				*t = node;
				t = &node->next;

				carry = sum / 10;
			}

			if(carry > 0) {
				ListNode *node = new ListNode(carry % 10);
				*t = node;
			}

			return head;
		}

	private:
		int getValueAndMoveNext(ListNode* &node) {
			int x = 0;
			if(node != NULL) {
				x = node->val;
				node = node->next;
			}
			return x;
		}
};

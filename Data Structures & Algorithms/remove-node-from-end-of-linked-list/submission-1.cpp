/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N = 0;
        ListNode* curr = head;
        while(curr) {
            N++;
            curr = curr->next;
        }

        int rmIndex = N-n;
        if (rmIndex == 0) return head->next;

        curr = head;

        for (int i=1; i < N; i++) {
            if (i == rmIndex) {
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
        }
        return head;
    }
};

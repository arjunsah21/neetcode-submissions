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
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* first = head;
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;
        second = reverseLinkedList(second);

        while(second) {
            ListNode* firstNxt = first->next;
            ListNode* secondNxt = second->next;

            first->next = second;
            second->next = firstNxt;

            first = firstNxt;
            second = secondNxt; 
        }
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       
       node->val = node->next->val;
       ListNode* temp = node->next;
       node->next = node->next->next;
       delete temp;
        // This is alos correct 
        // ListNiode* curr = head;

        // int i = 0;
        // while (curr != NULL && curr->next != NULL) {
        //     if (curr == node) {
        //         int x = i;
        //         break;
        //     }
        //     curr = curr->next;
        //     i++;
        // }
        // if (x == -1)
        //     return;

        // if (x == 0) {
        //     ListNode* temp = head;
        //     head = head->next;
        //     delete temp;
        //     return;
        // }

        // ListNode* current = head;
        // for (int i = 0; i < x; i++) {
        //     current = current->next;
        // }
        // ListNode* xyz = current->next;
        // current->next = curren->next->next;
        // delete xyz;

        // return head;
    }
};
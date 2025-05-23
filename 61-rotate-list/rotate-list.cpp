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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;

        if((head == NULL) || (k == 0)) return head;
        int i = 1;
        while(temp->next != NULL){
            temp = temp->next;
            i++;
        }
        temp->next = head;
        k = k % i;
        int x = i - k;

        for ( int i = 0 ; i < x; i++){
            temp = temp->next;
        }
        ListNode* newhead = temp->next;
        temp->next = NULL;

        return newhead;
    }
};
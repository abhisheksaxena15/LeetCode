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
        // k = k % temp.size();
        if((head == NULL) || (k == 0)) return head;
        int i = 0;
        while(temp->next != NULL){
            temp = temp->next;
            i++;
        }
        temp->next = head;
        k = k % (i+1);
        int x = (i+1) - k;
        for(int i = 0; i < x; i++){
            temp = temp->next;
        }
        ListNode* mainlist = temp->next;
        temp->next = NULL;

        return mainlist;
    }
};
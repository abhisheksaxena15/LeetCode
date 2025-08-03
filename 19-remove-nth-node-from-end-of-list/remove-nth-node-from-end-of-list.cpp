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

        ListNode* temp = head;
        int i = 1;
        while ( temp != NULL && temp->next != NULL) {
            temp = temp->next;
            i++;
        }
        int x = i - n;
        if( x == 0){
                
                ListNode* current = head->next;
                delete head;
                return current;
            }

        ListNode* curr = head;
        ListNode* temp_new = curr;

        for ( int i = 1 ; i < x; i++){
            curr = curr->next;// 1->2->3 curr at 3 , idx 2
        }

        ListNode* next = curr->next; //4
        curr->next = curr->next->next;
        delete next;
         
        return head;
        // int j = 0;
        // while( j < x ){
        //     temp_new = temp_new->next;
        //     next = temp_new;
        //     j++;

            
        // }

        // return newnode;
    }
};
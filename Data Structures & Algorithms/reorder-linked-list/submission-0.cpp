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
    void reorderList(ListNode* head) {
        ListNode* slow =  head  ; 
        ListNode* fast = head ; 

        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next ; 
            fast = fast->next->next ;
        }  
        ListNode * second  =  slow->next  ; 
        slow->next = NULL ; 
        ListNode * prev  = NULL  ; 
        ListNode* temp = second  ;  
        while(temp != NULL) {
            ListNode * front  =  temp->next ; 
            temp->next =  prev ; 
            prev  = temp ; 
            temp = front ;
        }   
        ListNode* firstHead =  head ; 
        ListNode* secondHead  = prev  ; 
        while(secondHead != NULL) {
            ListNode* firstNext =  firstHead->next ; 
            ListNode* secondNext = secondHead->next ;  

            firstHead->next =  secondHead  ;
            secondHead->next = firstNext ; 
            
            firstHead =  firstNext ;
            secondHead =  secondNext ;

        }

    }
};

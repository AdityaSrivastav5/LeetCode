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
        ListNode* ptr=head;
        ListNode* temp=head;
         unsigned int count = 0;
         if(head==NULL || head->next==NULL && n==1){
             return NULL;
         }
        while(ptr->next!=NULL && ptr!=NULL){
            ptr=ptr->next;
            count+=1;
        }
        int a=count - n;
        if(a<0){
            head=head->next;
            return head;
        }
       for(int i=0;i<a;i++){
            temp=temp->next;
            
        }
        temp->next=(temp->next)->next;
        return head;        
    }
};

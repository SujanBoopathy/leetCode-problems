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
         ListNode* first=head;
        ListNode* second=head;
        if(head->next==NULL || head==NULL)
            return NULL;
        if(head->next->next==NULL){
            if(n==2){
                head=head->next;
                return head;
            }
            else{
                head->next=NULL;
                return head;
            }
        }
        for(int i=0;i<=n;i++){
            first=first->next;
        }
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return head;
    }
};
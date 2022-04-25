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
    bool check(long int n){
        long int r=0;
        long int t=n;
        while(t>0){
            r=r*10+(t%10);
            t/=10;
        }
        if(r==n)
            return true;
        else 
            return false;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        long long num=0;
        while(temp!=NULL){
            num=num*10+temp->val;
            temp=temp->next;
        }
        return check(num);
    }
};
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
    void check(ListNode* c1,ListNode* c2,bool& v){
        if(c2==NULL)
            return;
        if(c1==c2)
            v=true;
        check(c1,c2->next,v);
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        bool v=false;
        while(a){
            check(a,b,v);
            if(v)
                return a;
            a=a->next;
        }
        return NULL;
    }
};
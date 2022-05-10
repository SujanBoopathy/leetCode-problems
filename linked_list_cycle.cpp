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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> v;
        while(head){
            if(find(v.begin(),v.end(),head)!=v.end()){
                return true;
            }
            else{
                v.push_back(head);
            }
            head=head->next;
        }
        return false;
    }
};
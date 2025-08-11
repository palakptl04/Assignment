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
 #include<stack>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        stack<int> s;

        while(temp){
            s.push(temp->val);
            temp=temp->next;
        }
        ListNode* r;
        r= new ListNode(s.top());
        s.pop();
        ListNode* t=r;
        while(!s.empty()){
            t->next=new ListNode(s.top());
            s.pop();
            t=t->next;
            
        }
        return r;
    }
};
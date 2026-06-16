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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count=1;
        ListNode* one=head;
        while(one!=nullptr && count<left-1){
            one=one->next;
            count++;
        }
        ListNode* two;
        if(left==1){
            two=one;
            one=nullptr;
        }
        else{
            two=one->next;  
            count++;
        }
        ListNode* val=two;
        ListNode* prev=nullptr;
        ListNode* temp;
        while(val!=nullptr && count<=right){
            temp=val->next;
            val->next=prev;
            prev=val;
            val=temp;
            count++;
        }
        if(left!=1){
            one->next=prev;
            two->next=temp;
        }
        else{
            two->next=temp;
            return prev;
        }
        return head;
    }
};
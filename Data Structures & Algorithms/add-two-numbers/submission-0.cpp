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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rem=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* head=new ListNode((temp1->val + temp2->val + rem)%10);
        rem= (temp1->val + temp2->val + rem )/10;
        temp1= temp1->next;
        temp2= temp2->next;
        ListNode* temp= head;
        while(temp1!=nullptr && temp2!=nullptr){
            ListNode* node=new ListNode((temp1->val + temp2->val + rem)%10);
            rem= (temp1->val + temp2->val + rem )/10;
            temp->next=node; 
            temp=temp->next;
            temp1= temp1->next;
            temp2= temp2->next;
        }
        while(temp1!=nullptr){
            ListNode* node=new ListNode((temp1->val + rem)%10);
            rem= (temp1->val + rem )/10;
            temp->next=node;
            temp=temp->next;
            temp1= temp1->next;
        }
        while(temp2!=nullptr){
            ListNode* node=new ListNode((temp2->val + rem)%10);
            rem= (temp2->val + rem )/10;
            temp->next=node;
            temp=temp->next;
            temp2= temp2->next;
        }
        if(rem!=0){
            ListNode* node= new ListNode(rem);
            temp->next=node;
        }
        return head;
    }
};

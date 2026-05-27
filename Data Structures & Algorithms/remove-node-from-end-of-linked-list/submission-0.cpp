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
        ListNode* len = head;
        int length=0;
        while(len!=nullptr){
            length++;
            len=len->next;
        }
        if(length==0 || length==1){
            return nullptr;
        }
        ListNode* temp=head;
        if(length-n==0){
            head=head->next;
        }
        for(int i=0;i<length-n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};

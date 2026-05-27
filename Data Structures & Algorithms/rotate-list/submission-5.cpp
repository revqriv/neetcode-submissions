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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
                return head;
        }
        if(head->next->next==nullptr){
            if(k%2==0){
                return head;
            }
            else{
                ListNode* temp=head;
                temp->next->next=temp;
                head=temp->next;
                temp->next=nullptr;
            }
            
        }
        int len=0;
        ListNode* leng=head;
        while(leng!=nullptr){
            len++;
            leng=leng->next;
        }
        k=k%len;
        for(int i=0;i<k;i++){
            ListNode* temp = head;
            while(temp->next!=nullptr){
                temp=temp->next;
                if(temp->next->next==nullptr){
                    temp->next->next=head;
                    head=temp->next;
                    temp->next=nullptr;
                    /*temp=head;
                    continue;*/  
                }
            }
        }
        return head;
    }
};
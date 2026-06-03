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
        int count = 0;
        ListNode * temp = head;
        while(temp != NULL){
            count++;
            temp= temp->next;
        }
        int pos = count-n;
        if(pos > 1){
            int idx= pos;
            ListNode* temp1= head;
            while(idx > 0){
                idx--;
                if(idx != 0){
                    temp1 = temp1->next;
                }
            }
            ListNode * delnode = temp1->next;
            temp1->next = temp1->next->next;
            delete delnode;
            return head;
        }
        if(pos==0){
            ListNode * x = head;
            head= head->next;
            delete x;
            return head;
        }
        else{
            int idx= pos;
            ListNode* temp1= head;
            while(idx > 0){
                idx--;
                if(idx != 0){
                    temp1 = temp1->next;
                }
            }
            ListNode* delnode= temp1->next;
            temp1->next=temp1->next->next;
            return head;
            delete delnode;
        }
    }
};
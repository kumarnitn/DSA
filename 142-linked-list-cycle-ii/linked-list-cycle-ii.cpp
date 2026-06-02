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
    ListNode *detectCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;
        bool flag = false;
        ListNode * idx;
        while(fast != NULL && fast->next != NULL ){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                idx = fast;
                flag= true;
                break;
            }
        }
        if(flag==true){
            slow = head;
            fast = idx;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        else{
            return NULL;
        }

        
    }
};
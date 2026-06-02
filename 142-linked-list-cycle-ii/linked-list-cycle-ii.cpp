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
        map<ListNode* , bool> collect;
        ListNode* temp = head;
        while(temp != NULL){
            if(collect[temp]==true) return temp;
            else{
                collect[temp]=true;
                temp= temp->next;
            }
        }
        return NULL;
        
    }
};
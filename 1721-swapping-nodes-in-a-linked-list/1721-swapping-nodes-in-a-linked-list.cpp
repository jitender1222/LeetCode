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
    int find_len(ListNode* head){
        int len=0;
       while(head){
           head=head->next;
           len++;
       }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first=head;
        ListNode* second=head;
        int len=find_len(head);
        for(int i=0;i<k-1;i++){
            first=first->next;
        }
        for(int i=0;i<len-k;i++){
            second=second->next;
        }
        swap(first->val,second->val);
        return head;
    }
};









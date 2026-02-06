// Link : https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0)
            return head;

        int len = 1;
        ListNode* curr = head;
        while(curr->next!=NULL){
            len++;
            curr = curr->next;
        }
        k = k%len;
        curr->next = head;
        for(int i=0; i<len-k; i++){
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};
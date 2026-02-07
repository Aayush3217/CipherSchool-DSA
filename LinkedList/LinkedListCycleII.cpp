// Link : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flage = false;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flage = true;
                break;
            }
        }
        if(flage==false) return NULL;
        ListNode* temp = head;
        while(temp!=slow){
            slow = slow->next;
            temp = temp->next;
        }
        return slow;
    }
};
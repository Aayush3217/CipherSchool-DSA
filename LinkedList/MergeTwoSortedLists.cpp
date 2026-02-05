// Link : https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* c = new ListNode(-1);
        ListNode* temp = c;

        while(list1 && list2){
            if(list1->val<=list2->val){
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        if(list1==NULL){
            temp->next = list2;
        }else{
            temp->next = list1;
        }
        return c->next;
    }
};
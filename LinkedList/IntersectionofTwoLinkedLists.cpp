// Link :  https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1640046069/


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        int step = 0;
        if(lenA>lenB){
            step = lenA - lenB;
            for(int i=1; i<=step; i++){
                tempA = tempA->next;
            }
        }else{
            step = lenB - lenA;
            for(int i=1; i<=step; i++){
                tempB = tempB->next;
            }
        }
        while(tempA!=tempB){
            tempA = tempA->next;
            tempB =tempB->next;
        }
        return tempA;
    }
};
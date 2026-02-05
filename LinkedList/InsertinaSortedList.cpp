// Link : https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        Node* newNode = new Node(key);
        
        //insert in front
        if(head==NULL || key<=head->data){
            newNode->next = head;
            return newNode;
        }
        
        // inserting in middle or last
        Node* curr = head;
        
        while(curr->next!=NULL && curr->next->data<key){
            curr = curr->next;
        }
        
        // insert Node
        newNode->next = curr->next;
        curr->next = newNode;
        return head;
    }
};
// Link : https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
        if(head==NULL) return head;
        
        
        // Delete head
        if(head->data == key){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        // Delete middle or last
        Node* curr = head;
        
        while(curr->next!=NULL && curr->next->data!=key){
            curr = curr->next;
        }
        
        //If found
        if(curr->next != NULL){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        return head;
    }
};
// Link : https://www.geeksforgeeks.org/problems/print-linked-list-elements/1

class Solution {
  public:
    vector<int> printList(Node *head) {
        Node* temp = head;
        vector<int> ans;
        
        while(temp){
            ans.push_back(temp->data);
            temp = temp->next;
        }
        return ans;
    }
};
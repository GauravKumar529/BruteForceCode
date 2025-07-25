/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        using Node = DLLNode ;
        Node* temp = head ;
        vector<int > v;
        while(temp != NULL) {
            v.push_back(temp->data);
            temp = temp->next ;
        }
        temp= head ;
        int i = v.size() - 1;
        while(i>= 0) {
            temp-> data = v[i--];
            temp = temp->next ;
        }
        return head ;
        
        
    }
};

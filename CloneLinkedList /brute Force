/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
// this is a problem where i should submit a brutr force whose complexity is very important for that one also 
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr) return NULL;
        Node* temp = head ;
        Node* dummy = new Node(-1);
        Node* copyNode = dummy;
        unordered_map<Node* , Node* > mpp;
        while(temp ) {
            Node* newNode = new Node (temp->val);
            mpp[temp] =  newNode;
            temp = temp->next ;
        }
        temp = head ;
        while(temp ) {
            copyNode = mpp[temp];
            copyNode->next = mpp[temp->next ]; //  mppp[temp->next] is the depp copy which will i ned basically i preserve actual data and its deepc copy 
            copyNode->random = mpp[temp->random];
            temp = temp->next ;
        }
        return mpp[head];        
    }
};

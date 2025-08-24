/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        using Node = ListNode ;
        if(headA == nullptr || headB == nullptr ) return NULL;
        Node* temp1 = headA;
        unordered_map<Node* , int > mpp;
        while(temp1 != nullptr ) {
            mpp[temp1] = 1;
            temp1 = temp1 ->next ;
        }
        Node* temp2 = headB;
        while(temp2 != nullptr ) {
            if(mpp.find(temp2) != mpp.end()) return temp2;
            temp2 = temp2->next ;
        }
        return NULL;
    }
    // what i learned from this ->->-> hey listen , if i stored all nodes of twmp 1 and  i have to find that wether my(traversing in ) temp2 ->node ->is present in that mpp then 
    // my mistake i,ll be traverse in mpp for(auto it : mpp)  and usong nesting loops that,s totally out of logic 
    //  where i lagged -> i , ll not recall the technique to fng something in the mpp;
    // using mpp.find(temp2) != mpp.end() //  states that temp2 is present in the mpp
};

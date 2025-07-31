/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
using Node  = ListNode ;
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr ) return head ;

        Node* temp = head ;
        vector<int > v;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next ;
        }
        reverse(v.begin() , v.end());
        k = k % v.size();
       // int kth  = v.size() - k - 1;
        reverse(v.begin() , v.begin() + k);
        reverse(v.begin() + k , v.end());
        temp = head ;
        int i = 0;
        while(temp )
        {
            temp ->val = v[i++];
            temp = temp->next ;
        }
        return head ;
        
    }
};

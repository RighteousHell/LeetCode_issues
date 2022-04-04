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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* steper = head;
        int nodes_num = 1;
        
        
        while ( steper->next)
        {
            steper = steper->next;
            ++nodes_num;
            
        }
        cout << "Nodes: " << nodes_num;
        
        steper = head;
        for (int i = 1; i < k; ++i)
        {
          steper = steper->next;  
        }
        ListNode tmp = (*steper);
        ListNode* tmp_p = steper;
        steper = head;
        for (int i = 0; i < nodes_num-k; ++i)
        {
          steper = steper->next; 
        }
        tmp_p->val = steper->val;
        steper->val = tmp.val;
        
        return head;
        
    }
};
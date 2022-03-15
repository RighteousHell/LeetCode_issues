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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* tmp_head = head;
        ListNode* ans = (ListNode*) new ListNode;
        ListNode* ans_footman = ans;

        
        
        int counter = 0;
        
        
        while ( tmp_head )
        {
         if ( 0 != tmp_head->val )
         {
             counter += tmp_head->val;
         }
            else 
            {

                if (counter == 0)
                {
                    tmp_head = tmp_head->next;
                    continue;
                }
                if (ans_footman->val == 0)
                {
                    ans_footman->val = counter;
                    counter = 0;
                }
                else
                {
                ListNode* new_node = (ListNode*) new ListNode;
                ans_footman->next = new_node ;
                new_node->val = counter;
                ans_footman = ans_footman->next;
                counter = 0;
                }
           
            }
            
            tmp_head = tmp_head->next;
            
            
        }
        

        
        return  ans;
        
    }
};
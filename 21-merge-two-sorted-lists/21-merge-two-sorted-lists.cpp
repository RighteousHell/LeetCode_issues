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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode*  ans = nullptr;
        if (!list1)
        {
            return list2;
        } else if (!list2)
        {
            return list1;
        }
        else if (!list1 && !list2)
        {
            ans;
        }
        if (list1->val < list2->val)
        {
            ans = list1;
            list1 = list1->next;
        }
        else 
        {
            ans = list2;
            list2 = list2->next;
        }
        ListNode* steper = ans;
        //steper = steper->next;
        while (list1 || list2)
        {
            if (list1 && list2)
            {
            if ( list1->val < list2->val )
            {
                steper->next = list1;
                list1 = list1->next;
            }
            else 
            {
                steper->next = list2;
                list2 = list2->next;
            }
            }
            else if (list1)
            {
                steper->next = list1;
                list1 = list1->next;
            }
            else
            {
               steper->next = list2;
                list2 = list2->next; 
            }
            
            steper = steper->next;
        }
        
        return ans;
    }
};
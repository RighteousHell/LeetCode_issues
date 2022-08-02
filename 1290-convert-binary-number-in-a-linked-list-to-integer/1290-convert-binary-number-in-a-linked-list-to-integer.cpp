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
    int getDecimalValue(ListNode* head) {
        
        int ans = 0;
        vector<int> tmp_vec;
        
    while (head)
    {
        tmp_vec.emplace_back(head->val);
        head = head->next;
    }
        for (int i = 0, j = tmp_vec.size(); i < tmp_vec.size(); ++i, --j)
        {
            if (tmp_vec[i] == 1)
            {
            ans += pow(2, j-1);
            }
        }
        return ans;
        
    }
};
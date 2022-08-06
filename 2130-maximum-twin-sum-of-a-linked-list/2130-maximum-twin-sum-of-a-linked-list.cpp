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
    int pairSum(ListNode* head) {
        vector<int> arr;
        
        while (head)
        {
            arr.emplace_back(head->val);
            head = head->next;
        }
        
        
        int ans = 0;
        for (int i = 0, j = arr.size()-1; i < arr.size()/2; ++i, --j)
        {
            int tmp = arr[i] + arr[j];
            if (tmp > ans)
            {
                ans = tmp;
            }
        }
        return ans;
        
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int answer = 0;
        rangeSumBST (root, low, high, answer);
        return answer;
    }
    
    void rangeSumBST(TreeNode* root, int low, int high, int& answer)
    {
        if (!root)
        {
            return;
        }
        
          rangeSumBST(root->left, low,  high, answer);
          rangeSumBST(root->right,  low,  high, answer);
        
        if (root->val >= low && root->val <= high)
        {
            answer += root->val;
        }
    }
};
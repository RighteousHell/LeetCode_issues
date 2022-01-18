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
    int deepestLeavesSum(TreeNode* root) {
        int deepest = 0;
        int curr_deep = 0;
        TreeNode* it;
        
       serch_deepest (root, deepest, curr_deep);
        cout << deepest;
        
        
        
      
            
        return sum_deepest ( root, deepest, curr_deep);
    }
    
    void serch_deepest (TreeNode* root, int& deepest, int curr_deep)
    {
       if (root)
       {
           ++curr_deep;
           serch_deepest(root->left, deepest, curr_deep);
           serch_deepest(root->right, deepest, curr_deep);
        }
        
        else
        {
            deepest = (deepest < curr_deep) ? curr_deep : deepest;
        }
    }
    
        int sum_deepest (TreeNode* root, int& deepest, int curr_deep)
    {
            int sum = 0;
 if (root)
       {
           ++curr_deep;
          sum += sum_deepest(root->left, deepest, curr_deep);
           sum += sum_deepest(root->right, deepest, curr_deep);
          return sum +=  (deepest == curr_deep) ? root->val : 0;
        }
            return 0;
        
        
          
    }
    
};
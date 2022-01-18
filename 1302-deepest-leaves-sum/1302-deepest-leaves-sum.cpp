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
        //int curr_deep = 0;
        int answer = 0;
        
        if (!root)
        {
            return 0;
        }
        
        search_deepest ( root, deepest, answer, 0);
            
            return answer;
        
        
        
       //serch_deepest (root, deepest, curr_deep);
        //return sum_deepest ( root, deepest, curr_deep);
    }
    
    void search_deepest ( TreeNode* root, int& deepest, int& answer, int curr_deep)
    {
        if ( !root )
        {
            return;
        }
        
        if ( deepest < curr_deep )
        {
            deepest = curr_deep;
            answer = 0;
        }
        
        if ( !root->left && !root->right && curr_deep == deepest ) 
        {
            answer += root->val;
            return;
        }
        
        search_deepest ( root->left, deepest, answer, curr_deep+1 );
        search_deepest ( root->right, deepest, answer, curr_deep+1 );
    }
    
    /*void serch_deepest (TreeNode* root, int& deepest, int curr_deep)
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
    */
};
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
    int sumEvenGrandparent(TreeNode* root) 
    {
        if ( !root )
        {
            return 0;
        }
        
        int sum = 0;
        sumEvenGrandparent(root, 0, 0, sum);
        
        return sum; 
    }
    
    
    void sumEvenGrandparent ( TreeNode* root, int parent, int grandparent, int& sum ) 
    {
        if (  (grandparent != 0) && (0 == grandparent % 2)  )
        {
            sum += root->val;
        }
        
        if (root->left)
        {
            sumEvenGrandparent(root->left, root->val , parent, sum);
        }
            if (root->right)
        {
            sumEvenGrandparent(root->right, root->val , parent, sum);
        }
    }
    
};
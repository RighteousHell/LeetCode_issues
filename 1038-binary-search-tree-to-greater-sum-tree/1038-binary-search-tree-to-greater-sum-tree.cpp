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
    
    TreeNode* bstToGst(TreeNode* root) {
        
        int counter = 0;
       changetree (root, counter);
        
        return root;
    }
    
    void changetree (TreeNode* root, int& counter)
    {
       if (!root)
       {
           return;
       }
        
        changetree(root->right, counter);
        
        root->val +=counter;
        
        counter = root->val;
        
        changetree(root->left, counter);
        
        

    }
    
    
};
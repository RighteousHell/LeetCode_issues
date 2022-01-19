/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode* answer = NULL;
        
        //cout <<  "Address answer before " << answer << endl;
        
        findTargetCopy ( cloned, target, answer );
        
        //cout <<  "Address answer before RETURN " << answer  << endl;
        
            return answer;
    }
    
    void findTargetCopy (TreeNode* root, TreeNode* target, TreeNode*& answer)
    {
        if ( !root )
        {
          return;  
        }
        
        //cout << "my value " << root->val << " target value " << target->val << endl; 
        
        if ( root->val == target->val )
        {
            answer = root;
           // cout << "ANSWER: my value " << root->val << " target value " << target->val << " answer  " << answer->val << endl;
            //cout <<  "Address answer after " << answer << "  adress of same node " << root  << endl;
            
            return;
        }
        
        
        findTargetCopy (root->left, target, answer);
        findTargetCopy (root->right, target, answer);
        
    }
};
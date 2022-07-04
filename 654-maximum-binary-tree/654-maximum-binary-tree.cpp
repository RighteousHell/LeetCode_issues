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
    TreeNode* constructMaximumBinaryTree(vector<int> nums) {
        
       TreeNode* root = nullptr;
        build_subtree (root, nums);
        return root;
            
    }
    
    void build_subtree (TreeNode*& root,  vector<int> subtree)
    {
        
        root =  new  TreeNode();
        
        auto it_border = std::max_element(subtree.begin(), subtree.end());
        root->val = *it_border;
        
        if (subtree.begin() <= it_border-1 )
        {
            build_subtree(root->left, vector(subtree.begin(), it_border));
        }
        
        if (it_border+1 < subtree.end() )
        {
            build_subtree(root->right, vector<int>(it_border+1, subtree.end()));
        }
         
    }
    
    
    /*int find_max (const vector<int> &subtree)
    {
        int max =  0;
        
        for (int i = 0; i < subtree.size(); ++i)
        {
            max = (max < subtree.at(i)) ? subtree.at(i) : max;
            
        }
        
        
        return max;
    }*/
};
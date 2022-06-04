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
    int averageOfSubtree(TreeNode* root) {
        list<TreeNode*> nodes_list;
        int ans = 0;
        int counter = 0;
        int nodes_subtree = 0;

        nodes_list.emplace_back(root);
        
        while (!nodes_list.empty())
        {
            auto tmp =  nodes_list.front();
            nodes_counter (tmp, counter, nodes_subtree);
            if ( tmp->val == counter/nodes_subtree )
            {
                ++ans;
            }
            if (tmp->left)
            {
                nodes_list.emplace_back(tmp->left);
            }
              if (tmp->right)
            {
                nodes_list.emplace_back(tmp->right);
            }
            
            nodes_list.pop_front();
            counter = 0;
            nodes_subtree = 0;
        }
        
        
        return ans;
    }
    
    
    void nodes_counter (TreeNode* root, int& counter, int& nodes_subtree)
    {
        if (root)
        {
        counter += root->val;
        ++nodes_subtree;
        nodes_counter(root->left, counter, nodes_subtree);
        nodes_counter(root->right, counter, nodes_subtree);
        }
        
        
    }
};
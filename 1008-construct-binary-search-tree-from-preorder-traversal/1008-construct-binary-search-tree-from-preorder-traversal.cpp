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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* head = new TreeNode(preorder[0]);
       
            
        for (int i = 1; i < preorder.size(); ++i)
        {
         
            addNewNode(head, preorder[i]);
        }
            
        return head;
    }
    
    
    void addNewNode (TreeNode* head, int new_val)
    {        
        while (head)
        {
            if (head->val > new_val)
            {
                if(head->left)
                {
                    head = head->left;
                }
                else
                {
                head->left = new TreeNode(new_val);
                break;
                }

            }
            else 
            {
                if(head->right)
                {
                    head = head->right;
                }
                else
                {
                head->right = new TreeNode(new_val);
                break;
                }
            }
        }

        //head = new TreeNode(new_val);
        
    }
};
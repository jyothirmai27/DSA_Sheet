LeetCode - https://leetcode.com/problems/binary-tree-preorder-traversal/
TC - O(N)
 SC- O(N) (Auxiliary Space)
  
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> p;
        if(root==NULL)
            return p;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            root=s.top();
            s.pop();
            p.push_back(root->val);
            if(root->right!=NULL)
            {
                s.push(root->right);
            }
            if(root->left!=NULL)
            {
                s.push(root->left);
            }
        }
        return p;
        
    }
};

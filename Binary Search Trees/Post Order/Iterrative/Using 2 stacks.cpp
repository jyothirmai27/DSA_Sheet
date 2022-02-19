Leetcode - https://leetcode.com/problems/binary-tree-postorder-traversal/
TC - O(N)
SC - (N+N) - O(N) (Auxiliary Space)
  
 class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorder;
        if(root==NULL)
            return postorder;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* node = s1.top();
            s1.pop();
            s2.push(node);
            if(node->left!=NULL)
            {
                s1.push(node->left);
            }
            if(node->right!=NULL)
            {
                s1.push(node->right);
            }
        }
        while(!s2.empty())
        {
            postorder.push_back(s2.top()->val);
            s2.pop();
        }
        return postorder;
        
    }
};

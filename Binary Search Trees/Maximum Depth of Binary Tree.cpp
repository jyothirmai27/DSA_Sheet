Leetcode - https://leetcode.com/problems/maximum-depth-of-binary-tree/
TC - O(N) 
SC - O(1)
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);
        
        return max(leftHeight,rightHeight)+1;
        
    }
};  

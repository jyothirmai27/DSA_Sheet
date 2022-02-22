// LeetCode - https://leetcode.com/problems/balanced-binary-tree/
// TC - O(N)
// SC - O(N) (Auxiliary stack space for recursion)
  
class Solution {
public:
    int height(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        int leftHeight=height(root->left);
        if(leftHeight==-1)
            return -1;
        int rightHeight=height(root->right);
        if(rightHeight==-1)
            return -1;
        if(abs(leftHeight-rightHeight)>1)
            return -1;
        return max(leftHeight,rightHeight)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        
        return height(root)!=-1;
        
    }
};

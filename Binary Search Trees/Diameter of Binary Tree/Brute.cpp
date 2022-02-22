// LeetCode - https://leetcode.com/problems/diameter-of-binary-tree/
// TC - O(N^2)
// SC - O(N) (Auxiliary Space)

class Solution {
public:
    int height(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        
        return max(leftHeight,rightHeight)+1;
        
    }
    int max_diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        
        max_diameter = max(max_diameter,lh+rh);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        
        return max_diameter;
    }
};

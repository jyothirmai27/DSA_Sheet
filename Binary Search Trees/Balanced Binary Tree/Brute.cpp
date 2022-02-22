LeetCode - https://leetcode.com/problems/balanced-binary-tree/
TC - O(N) * O(N) = O(N^2) (O(N) - For finding the height of the tree,O(N) - For checking the balance of each node)
SC - O(1)


class Solution {
public:
    int height(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        
        return max(leftHeight,rightHeight)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return 1;
        int lh,rh;
        lh = height(root->left);
        rh = height(root->right);
        if(abs(lh-rh)>1)
            return false;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        if(!left  || !right)
            return false;
        return true;
        
    }
};

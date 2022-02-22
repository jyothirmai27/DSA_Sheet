// TC - O(N)
// SC - O(N) (Auxiliary Space)

class Solution {
public:
   
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter=0;
        height(root,max_diameter);
        return max_diameter;
    }
private:
    int height(TreeNode* node,int& max_diameter) {
        
        if(!node)
            return 0;
        int leftHeight=height(node->left,max_diameter);
        int rightHeight=height(node->right,max_diameter);
        
        max_diameter = max(max_diameter,leftHeight+rightHeight);
        
        return max(leftHeight,rightHeight)+1;
        
    }
};

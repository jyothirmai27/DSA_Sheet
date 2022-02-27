// GFG - https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1/
// TC - O(N)
// SC - O(N) (Auxiliary Space)

void solve(Node* root,vector<int>& v,int level)
{
    if(root==NULL)
    return;
    if(v.size()==level)
    {
        v.push_back(root->data);
    }
    solve(root->left,v,level+1);
    solve(root->right,v,level+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> v;
   solve(root,v,0);
   return v;
}

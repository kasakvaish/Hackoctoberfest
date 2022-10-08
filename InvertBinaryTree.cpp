class Solution {
public:
    void invert(TreeNode* root)
    {
        //base case
        if(root==NULL)
        return;
        //recur
        if(root->left)
        invert(root->left);
        if(root->right)
        invert(root->right);
        //swapping nodes 
        TreeNode* r=root->right;
        TreeNode* l=root->left;
        root->left=r;
        root->right=l;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};

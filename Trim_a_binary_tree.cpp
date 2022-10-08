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
    

    TreeNode* trimBST(TreeNode* root, int low, int high) {
      //there are 3 cases that arise 
        
        //case 1: root is NULL
        if(!root)return root;
        
        //case 2: root value lies within the range
        if(root->val >=low && root->val <=high) //both included
        {
            //then find its left and right subtree
            root->left = trimBST(root->left ,low,high);
            root->right = trimBST(root->right,low,high);
            return root;
        }
        
        //case 3: root value lies outside the range
        if(root->val<low)
        {
            //then check for right subtree of root because there is a possibility
            //that the right subtree lies in the range 
            //but there is no chance in hell that the left subree lies in the range
            //as the root itself doesn't lies and the left is going to be even smaller
            return trimBST(root->right,low,high);
        }
        return trimBST(root->left,low,high);
        //else check for left if root->val is greater than upper range

    }
};

/**
https://leetcode.com/problems/symmetric-tree/
 */
class Solution {
public:
    bool rec(TreeNode* root1,TreeNode* root2){
    if((!root1 && root2) || (!root2 && root1)){
        return false;
    }
    if(!root1 && !root2){
        return true;
    }
    if(root1->val == root2->val){
        return rec(root1->right,root2->left) && rec(root1->left,root2->right);
    }else{
        return false;
    }
}

bool isSymmetric(TreeNode* root) {
    return rec(root,root);
}
};
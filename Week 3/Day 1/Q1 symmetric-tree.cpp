/**
https://leetcode.com/problems/symmetric-tree/
 */
class Solution {
public:
    bool rec(TreeNode* r1,TreeNode* r2){
    if((!r1 && r2) || (!r2 && r1)){
        return false;
    }
    if(!r1 && !r2){
        return true;
    }
    if(r1->val == r2->val){
        return rec(r1->right,r2->left) && rec(r1->left,r2->right);
    }else{
        return false;
    }
}

bool isSymmetric(TreeNode* root) {
    return rec(root,root);
}
};
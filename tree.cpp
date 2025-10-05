struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x);
};

class Solution {
public:
    bool isSymmetric(TreeNode* root);
private:
    bool isMirror(TreeNode* t1, TreeNode* t2);
};
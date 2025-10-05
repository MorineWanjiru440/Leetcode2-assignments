typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
} TreeNode;

bool isSymmetric(TreeNode* root);
bool isMirror(TreeNode* t1, TreeNode* t2);
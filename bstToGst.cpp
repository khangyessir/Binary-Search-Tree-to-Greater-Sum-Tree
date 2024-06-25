#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
private:
    int sum = 0;
    void convert(TreeNode *root){
        if(root){
            convert(root -> right);
            sum += root -> val;
            root -> vale = sum;
            convert(root -> left);
        }
    }
public:
    TreeNode* bstToGst(TreeNode* root){
        convert(root);
        return root;
    }
};
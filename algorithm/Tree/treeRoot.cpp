#include<iostream>
#include<vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){
        val=0;
        left=nullptr;
        right=nullptr;
    }
    TreeNode(int val){
        this->val=val;
        left=nullptr;
        right=nullptr;
    }
};
TreeNode *solve(){
    TreeNode *root=new TreeNode(100);
    return root;
}
int main(){
    TreeNode *root=new TreeNode(10);
    root->left=new TreeNode(10);
    root->right=new TreeNode(5);
    root=solve();
    cout<<root->val<<endl;
    return 0;
}
#include <stack>
#include<iostream>
#include <vector>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
typedef vector<int> IntArray;

bool isValidBSTInOrder(TreeNode* root){
		stack<TreeNode*> temp;
        TreeNode* current=root;
        TreeNode* previous=NULL;
        while(current!=NULL || !temp.empty()){
            while(current!=NULL){
                temp.push(current);
                current=current->left;
            }
            current=temp.top();
            if(previous!=NULL && current->val <= previous->val)
                return false;
            previous=current;
            temp.pop();
            current=current->right;
        }
        return true;

}
bool isValidBSTPreOrder(TreeNode* root){

}
bool isValidBSTPostOrder(TreeNode* root){

}

bool isValidBSTFromInOrderArray(IntArray a){

}
bool isValidBSTFromPreOrderArray(IntArray a){

}
bool isValidBSTFromPostOrderArray(IntArray a){

}

int main(){
	TreeNode* root=new TreeNode(0);
	TreeNode* leaf=new TreeNode(-1);
	root->right=leaf;
	if(isValidBSTInOrder(root))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}

#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

    bool Judge(TreeNode* root1, TreeNode* root2){
        if(root2==NULL) return true;
        if(root1==NULL) return false;
        if(root1->val!=root2->val) return false;
        //if(root1!=NULL && root2!=NULL)
        return (Judge(root1->left,root2->left) && Judge(root1->right,root2->right));
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1!=NULL && pRoot2!=NULL){
            if(pRoot1->val==pRoot2->val && Judge(pRoot1,pRoot2)){
                   return true;
            }else{
                if(HasSubtree(pRoot1->left,pRoot2))
                    return true;
                if(HasSubtree(pRoot1->right,pRoot2))
                    return true;
            }
        }
		return false;
            
    }

int main(){
	//test case to do
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

    RandomListNode* Clone(RandomListNode* pHead)
    {
        //复制并合并
        RandomListNode* current=pHead;
        RandomListNode* last=nullptr;
        while(current!=nullptr){
            RandomListNode* newNode=new RandomListNode(current->label);
            newNode->next=current->next;
            current->next=newNode;
            current=newNode->next;
        }
        //遍历，random重指
        last=pHead;
        while(last){
            current=last->next;
            if(last->random) current->random=last->random->next;
            last=current->next;
        }
        //取出偶数节点
        RandomListNode* result=pHead->next;
        current=result;
        while(current->next){
            current->next=current->next->next;
            current=current->next;
        }
        
        return result;
    }

RandomListNode* createList(const vector<int>& init){
	int len=init.size();
	if(len<1) return NULL;
	RandomListNode* pRoot=new RandomListNode(init[0]);
	RandomListNode* pLast=pRoot;
	for(int i=1;i<len;++i){
		RandomListNode* pNode=new RandomListNode(init[i]);
		pLast->next=pNode;
		pLast->random=pNode;
		pLast=pNode;
	}
	return pRoot;

}


int main(){
	vector<int> init={1,2,3,4};
	RandomListNode* root=createList(init);
	RandomListNode* cloneNode=Clone(root);
	while(cloneNode){
		cout<<cloneNode->label<<endl;
		cloneNode=cloneNode->random;
	}
	return 0;
}

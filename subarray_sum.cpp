#include <vector>
#include <iostream>
#include <set>
using namespace std;
/**
 *leetcode Num209
 */

int minSubArrayLen(int s, vector<int>& nums) {
        int left=0,right=0;
        int result=nums.size();
        int sum=0;
		if(result==0) return 0;
		do{
            sum+=nums[right];
        } while(sum<s && ++right<result);
		if(sum<s) return 0;
		while(sum-nums[left]>=s){
            sum-=nums[left];
            ++left;
        }
       cout<<"first right "<<right<<" first left " <<left<<endl; 
	   result=right-left+1;
        while((right+1)<=nums.size()-1){
            if(nums[right+1]>nums[left]){
                ++right;
				sum+=nums[right];
                while(sum-nums[left]>=s){
                    sum-=nums[left];
                    ++left;
					cout<<"left "<<left<<" right "<<right<<endl;
                }
            }else if(nums[right+1]<nums[left]){
                sum-=nums[left];
                ++left;
				do{
                    sum+=nums[right+1];
					cout<<"left "<<left<<" right "<<right<<endl;
				}while((right+1)<=nums.size()-1 && sum+nums[++right]<s);
            }else{
                ++left;
                ++right;
            }
            result=(right-left+1)<result?(right-left+1):result;
            cout<<"result "<<result<<endl;
        }
        return result;
    }

int main(){
	typedef	pair<int,vector<int> > IntAndArray;
//	IntAndArray i={7,{2,3,1,2,4,3}};
//	IntAndArray i={11,{1,2,3,4,5}};
//	IntAndArray i={15,{5,1,3,5,10,7,4,9,2,8}};
	IntAndArray i={20,{2,16,14,15}};
	int r=minSubArrayLen(i.first,i.second);
	cout<<r<<endl;
	return 0;


}

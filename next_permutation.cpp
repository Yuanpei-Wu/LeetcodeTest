#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;


void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        if(len==1||len==0) return ;
        int index=len-2;
        for(;index>=0;index--){
            if(nums[index+1]>nums[index])
                break;
        }
        if(nums[index+1]<=nums[index]){
            reverse(nums.begin(),nums.end());
        }else{
            swap(nums[index],*upper_bound(nums.rbegin(),nums.rend()-index,nums[index]));
            reverse(nums.begin()+index+1,nums.end());
        }
}
int main(){
	vector<int> test={1,3,2};
	nextPermutation(test);
	copy(test.begin(),test.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
}



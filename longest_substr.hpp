#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int p1=0,p2=0;
        int maxlength=0;
        std::unordered_map<char,int> mmp;
        
        while((p2<=s.size()-1)){
            while(mmp.find(s[p2])==mmp.end()){
                if((p2>s.size()-1))
                    break;
                mmp.insert({s[p2],p2});
                p2++;                
            }
            int temp=mmp[s[p2]];
            for(int i=p1;i<=temp;i++){
                mmp.erase(s[i]);
            }
            
            maxlength=(p2-p1)>maxlength?(p2-p1):maxlength;
            p1=temp+1;
            
        }
        return maxlength;
        
    }
    
    
    
    
};

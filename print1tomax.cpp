#include <iostream>
using namespace std;
void Print1ToMax(int);
void Print1ToMaxRecursively(string,int);
void PrintNumber(string);
void Print1ToMax(int n){
		string s(n,'0');
		Print1ToMaxRecursively(s,0);
}
void Print1ToMaxRecursively(string number,  int index){
	if(index==number.length()){
		PrintNumber(number);
		return;
	}
	for(int i=0;i<10;++i){
		number[index]=i+'0';	
		Print1ToMaxRecursively(number,index+1);
	}
}
void PrintNumber(string n){
	int len=n.length();
	int i=0;
	for(;i<len;++i)
		if(n[i]!='0')
			break;
	cout<<n.substr(i,len-i)<<endl;
}
int main(){
	Print1ToMax(3);
}

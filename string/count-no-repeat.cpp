#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
char findfirstnonrepeat(const string& str){
	unordered_map<char,int> countMap;

	for(char ch:str){
		countMap[ch]++;
	}

	for(char ch: str){
		if(countMap[ch]==1){
			return ch;
		}
	}
	return '\0';
}
int main(){
	string str="megha";
	char result=findfirstnonrepeat(str);
	if(result!='\0'){
		cout<<result<<endl;
	}else{
		cout<<"no non repeating char found"<<endl;
	}
	return 0;
}


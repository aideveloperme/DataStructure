#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

void countcharacters(const string& str){
	unordered_map<char,int> countMap;

	//count the frequency of each character 
	for(char ch:str){
		countMap[ch]++;
	}
//print the frequency of the each character
	for (const auto& pair:countMap){
		cout<<pair.first<<":"<<pair.second<<endl;
	}
}
int main(){
	string str ="hello world";
	cout<<"character frequencies:"<<endl;
	countcharacters(str);
	return 0;
}



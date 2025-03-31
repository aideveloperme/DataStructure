#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	for(int i=0;i<=5;i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<",";
		s.pop();
	}


}
//push,pop,top,empty() --methods 
//O(1)
//time comp

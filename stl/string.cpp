#include<iostream>
#include<string>
using namespace std;

int main(){
	string s0;
	string s1("hello");
	string s2 = "hello world";
	string s3(s2);

	string s4=s3;
	
	char a[]={'a','b','c','\0'};

	string s5(a);
	
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	//if string empty or not 
	if(s0.empty()){
		cout<<"s0 is an empty string";
	}
	//append
	s0.append("i love c++");
	cout<<s0<<endl;

	s0+="and python";

	cout<<s0;

	//remove
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	//compare strings
	s0="apple";
	s1="mango";

	cout<<s0.compare(s1)<<endl;

	//overloaded operators 
	if(s0<s1)
	{	cout<<"mango is lexi less than apple";
	}

	cout<<s1[0];

	//also find substring 
	string s="i want to have apple juice";
	int idx=s.find("apple");
	cout<<idx<<endl;

	//remove a word from the string
	string word="apple";
	int len =word.length();
	cout<<s<<endl;

	s.erase(idx,len+1);
	cout<<s<<endl;

	//iterate over all the characters in the string 
	for(int i=0;i<s1.length();i++){
		cout<<s1[i]<<";";
	}

	//iterate the string starting from begin and end, function
	//s.begin
	//s.end
	for(auto it=s.begin();it!=s.end();it++){
		cout<<(*it)<<",";
		//it is a pointer i mean
	}
	
	//for each loop 
	for(auto c:s1){
		cout<<c<<".";
	}
	//auto keyword automatically defined what values in -auto x=5; auto y="helo" auto z=5.5
	


}

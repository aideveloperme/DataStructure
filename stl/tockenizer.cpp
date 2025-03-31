#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[100]="today is a rainy day";

	char *ptr= strtok(s," ");
	cout<<ptr<<endl;
	
	ptr = strtok(s," ");
	cout<<ptr<<endl;
	
	
	ptr = strtok(NULL," ");
	cout<<ptr<<endl;
	

	while(ptr!=NULL){
		ptr=strtok(NULL,",");
		cout<<ptr<<endl;
	}

	return 0;
}

//char *strtok(char *s,char *delimiters)
//returns a token on each subequent call
//on the first call function should be passed with string argument for 's'
//on subsequent calls we should pass the string argument as null 
//
//deliminator can be comma, or anything space or 

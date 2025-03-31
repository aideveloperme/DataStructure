#include<bits/stdc++.h>
using namespace std;

struct Node{       //structure to use , mixed data type to store data
	int data; // int data ,
	Node* next;  //we have pointer next whose type is same as the type o			he structure such a called self referntial structure : every node have address of next node and datatype of the next node is same as				current node
	Node(int x){ // • Constructor is a member function of a class, whose name is same as the class name.
		     // • Constructor do not return value, hence they do not have a return type.
		     // constructor it initialize data value and next node, with class represnetion length of program will increase 
		data =x;
		next = NULL;
	}

};

int main()
{
	Node *head=new  Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
}

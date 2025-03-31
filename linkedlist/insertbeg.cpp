#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head=NULL;
void insertAtbegin(int data){
	Node* newNode=new Node();
	newNode->data=data;
	newNode_>next =head;
	head=newNode;
}

void printList()
{
	

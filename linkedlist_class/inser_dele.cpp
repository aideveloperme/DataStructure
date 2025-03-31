#include<iostream>
using namespace std;

// Node class to represent a node of the linkedlist

class Node{
	public:
		int data;
		Node* next;

		//default constructor : actually used when not passing any arguments 
		Node
		{
			data =0;
			nest=NULL;
		}

		//Parameterised constuctor 
		Node( int data)
		{
			this->data = data;
			this->next = NULL;
		}
};

//Linked list class to implement a linked list
class linkedlist{
	Node* head;

	public:
	linkedlist() {
		head= NULL;
	}

	void insertNode(int);
	void printList();
	void deleteNode(int);
};
void linkedList::deleteNode(int nodeoffset)
{
	Node *temp1 = head, *temp2 = NULL;
	int listlen = 0;
	if(head == NULL){
		cout<<"List empty"<<endl;
		return;
	}
	//find length of the ll 
	while (temp != NULL){
		temp1 = temp1->next;
		listlen++;
	}
	//check if the position is to be deleted is greater than the length of the ll 
	if( listlen<nodeoffset){
		cout<<"index out of range"<<endl;
		return;
	}

	//declare temp1
	temp1 = head;
	//deleting the head 
	if(nodeoffset == 1){













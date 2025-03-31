#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;

	Node(int x){
		int data=x;
		next=NULL;
	}
};
void printlist(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<"";
		curr=curr->next;
	}
}
int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printlist(head);
	return 0;
}
//recursive traversal of linkedlist
#include<iostream>
struct Node{
	int data;
	Node *next;
}
printlist(Node * node){
	if(head==nullptr){
		return;
	}
	std::cout<<head->data<<"";
	printlist(head->next);

}
int main(){
	Node* head = new Node{1, new Node{2, new Node{3, newNod}}}
	printlist(head);
	return 0;
}
// Instert at begin of linked list
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
//inseration @ front 
Node* head =NULL; //initialize head node as NULL , list is empty 

void insertAtBegin(int data){  //passing data as argument 
	Node* newNode=new Node(); //create a new node using newNode fun and strore it inot the newNode variable 
	newNode->data=data;// insert data into the newnode
	newNode->next=head;//  previous first node is store into the newnode address part 
	head=newNode;      //newnode addr is store into the head position 
}
vodi printlist(){ 
	Node* temp=head;   //head value is store into the temp variable to loos the head contant in the head.
	while(temp!=NULL){  //now temp contain the address of the first node 
		cout<<temp->data<<""; //print the temp data 
		temp=temp->next;      //increament the temp pointer and loop will continue and print the next data 
	}
}
//insert at the end of the ll
void insertAtEnd(Node *head){
	Node *temp=new Node(x);
	if(head==NULL)return temp;
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}	
	curr->next=temp;
	return head;
}
//delete head node ,first node in the ll
void delHead(Node *head){   //passing arg as head
	if(head==NULL)return NULL;  //if head is null list is empty return null nothing to delete 
	else{
		Node *temp=head->next; // we can not delete first node simply using delete function in c++ , 1st we have to store the addr part of the first node into the4 temp variable becz if we dont do this link to next node will not get so 
		delete head; // after store the head next into temp delete head 
		return temp;  //the return temp , means it contain the first node after deletion , instead head we used temp ,
	}
}

//insert at position
Node *insertAtposition(Node *head, int X, int pos){
	Node *temp=head;
	if(temp!=NULL) return NULL;
	if(pos==1)

int main(){
	insertAtBegin(10);
	cout<<"linedlist";
	printlist();
	return 0;
}

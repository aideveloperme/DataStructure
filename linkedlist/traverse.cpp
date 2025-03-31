#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

void printlist(Node *head){  //passing addres of same memory location 
			     //but both have same addr,but different varia
			     //in main ,head variable is in differnt 
			     //in printlist fun also have head variable
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<""<<"\n";
		curr=curr->next;
	}
}
int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printlist(head); //head as an argument , begin ourpointer with head
	return 0;
}


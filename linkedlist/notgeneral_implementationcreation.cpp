#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;

	Node(int X){
		data=X;
		next= NULL;

	} 
};
int main(){
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	//we ave 3 node not connected 
	head->next=temp1;
	temp1->next=temp2;
	
	Node *curr=head;
	while(curr != NULL){
		cout<<curr->data;
		if(curr->next !=NULL){
			cout<<"-->";
		curr=curr->next;

	}
	return 0;
	}

}

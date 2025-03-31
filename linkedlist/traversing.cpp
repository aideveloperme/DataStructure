#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int X){
		data =X;
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
	Node *head=new Node(20);
	Node *next=new Node(34);

	head->next->next=new Node(40);
	head->next->next->next=new Node(50);
	printlist(head);
	return 0;

}

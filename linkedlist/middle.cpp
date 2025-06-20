#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

class Node{
	public:
		int data;
		Node* next;
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};
Node* findMiddle(Node* head){
	Node* slow =head;
	Node* fast = head;
	while(fast!=nullptr && fast->next != nullptr){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
int main(){
	Node* head = new Node(1);
	head->next = new Node(3);
	head->next->next = new Node(4);
	head->next->next->next = new Node(7);
	head->next->next->next->next = new Node(8);
	head->next->next->next->next->next = new Node(2);
	
	Node* middleNode = findMiddle(head);
	cout<<"the middle node value is" <<middleNode->data<<endl;

	return 0;
}

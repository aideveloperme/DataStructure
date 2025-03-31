//pass head of ll as an argument 
//if head is null , return 
//if not ,add data , and recursively call for the 2nd node , and again check for next node nad then call for the next node 
//
#include <iostream>

struct Node{
	int data;
	Node* next;
};

void printList(Node* head){
	if(head==nullptr){
		return;
	}
	std::cout<<head->data<<"";
	printList(head->next);

}
int main(){
	Node* head=new Node{1, new Node{2, new Node{3, nullptr}}};
	printList(head);
	return 0;
}

//time complexty o(n),
//space O(n), n+1 function call in function call stack , storage of cun also takes space , so iterative space is better , becz it does not take any space complexity.

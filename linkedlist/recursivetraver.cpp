#include<iostream>
struct Node {
	int data;
	Node* next;
};
void printlist(Node* head){
	if(head==nullptr){
		return;
	}
	std::cout<<head->data<<"";
	printlist(head->next);

}
int main(){
	Node* head=new Node{1, new Node{2, new Node{3, nullprt}}};
	printlist(head);
	return 0;
}

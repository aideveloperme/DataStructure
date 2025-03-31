#include<iostream>
using namespace std;
 struct Node{
	 int data;
	 Node* next;
}
void insteratbegin(int data){       //passing int data as argument
	Node* newNode= new Node();  //create space in memeory
	newNode->data=data;         //insert data into newnode data field
	newNode->next=head;         //inorder to insert first node , newnode will strore the address of the next node , so which is in the head node ,
	head=newNode;		    //so put head value inside the next part of newnode & head node set as newnode :head it will store the addr of newnode
}

void printlist(){             //print function -no argument
	Node* temp =head;           //first we store the head value into temp pointer variable ,so temp will point to head 
	while(temp!=NULL){          // check temp  null or not if null emptylist return 0 else it has element to traverse
		cout<<temp->data<<"";  // so it will print the temp->data temp data that is first data
		temp=temp->next;       // and temp will increment by one.. temp->next is store into temp .
	}

}
Node *insertend(Node *head,int X){  //passing head and data item to be insert why bcz,through head only we can acces ll
	Node *temp=new Node(X);     //create a memory contains data X
	if(head==NULL)return temp;  // if head part is null ,, no element , ll empty ,so return newnode
	Node *curr=head;            //store head value into curr pointer variable
	while(curr->next!=NULL){    // first elem is  not null , increament curr and if it is reaches null
		curr=curr->next;
	}
	curr->next=temp;           // store newnode address that is temp holding ls into curr next part
	return head;               //return the head , points to head 
}
Node *deleteHead(Node *head){
	if(head==NULL)return NULL;
	else
		Node *temp=head->next;
		delete(head);
		return temp;
	}
}

Node *deleteLast(Node *head){       //passing head  pointer as argument 
	if(head==NULL)return NULL;  // if head is null ,list is empty so return null
	if(head->next=NULL){       //if list having only one element then delete head which is storing the addr of the first element 
		delete head;       
		return NULL;
	}
	Node *temp=head;                //store head value into temp pointer variable of type node 
	while(temp->next->next!==NULL){ // until the current next next value is NULL loop will go and increment the temp pointer varible 
		temp=temp->next;
	}
	delete(temp->next);          // delete temp->next means addres part of the first last node and set temp->next as null
	temp->next=NULL;
	return head;
}

void insertATpoistion(Node *head,int X,int pos){
	Node *newNode= new Node(4);
	if(head==NULL)
		if(pos==1)return temp;
		else return head;
	}
	Node *temp=head;
	if(pos==1)
		temp->next=head;


	for (int i=1;i<pos-1;i++){
		temp=temp->next;
		if(temp==NULL){ //NO POSITION
			cout<<"position out of range"<< endl;
			return head;

	}
	}
	temp->next=temp;
	newNode->next=temp->next->next;


}

int search(Node * head, int X){
	int pos=1;
	Node *curr=head;
	while(curr!=NULL)
		if(curr->data==searchdata)
			return pos;
		else 
			pos++;
			curr=curr->next;
	return -1;
}
int search(Node *head,int X){
	int pos=1;
	Node *curr=head;
	while(curr!=NULL)
		if(curr->data==X)
			return pos;
		else 
			pos++;
			curr=curr->next;
	return -1;
}
int recursivesreach(Node * head, int X){
	if(head==NULL)return -1;
	if(head->data==X)return 1;
	else
		int res=recursivsearch(head->next,X);
		if(res==-1)return -1;// if data is not there and head-/.next is null return -1 so if res is -1 return -1 to all recursive call 
		else return res+1;
}
}
//search fun time is O(n) whether is recursive or iterative 
//
void printMiddle(Node *head){
	if(head==NULL)return;
	int count=0;
	Node *curr;
	for (curr=head;curr!=NULL;curr=curr->next)
		count++;
	curr=head;
	for(int i=0;i<count/2;i++)
		curr=curr->next;
	cout<<curr->data;
}
//this require 2 traversal of linked list
//
//now we have 1 traversal of ll solution using 2 pointers based on the idea od slow and fast pointer 
int PrintMiddle(Node *head){
	if(head==NULL) return -1;
	Node *slow=head;
	Node *fast=head;

	while(fast!=NULL && fast->next!=NULL){//when fast become Null or fast next becomes null at that time slow will refering to the middle node 
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<slow->data;

}
//Nth Node from end of linked list 
int printNthFromend(Node * head,int n){
	int len=0;
	for(Node *curr=head;curr!=NULL;curr=curr->next)
		len++;
	if(len<n);
	return;
	Node *curr=head;
	for(int i=1;i<len-n+1;i++)
		curr=curr->next;
	cout<<(curr->data)<<"";
}
//using 2 pointer 
int printNth(Node *head, int n)
{	Node *first=head;
	Node *seond=head;
	if(head==NULL)return;
	for(int i=0;i<n;i++){
		if(first==NULL)return;
		first=first->next;
	}
	while(first!=NULL){
	second=second->next;
	first=first->next;
	}
cout<<(second->data);
}
//reverse ll-naive method
Node *revList(Node *head)
	vector<int> arr;
	for(Node *curr=head;curr!=NULL;curr=curr->next){
		arr.push_back(curr->data);
	}
	for(Node *curr=head;curr!=NULL;curr=curr->next){
		curr->data=arr.back();
		arr.pop_back();
	}
return head;
}
//efficeint code
Node *reverse(Node *head){
	Node *curr=head;
	Node *prev=NULL:
	while(curr!=NULL){
		Node *node

}
//recursive solution


int main(){
	insertatbegin(1);
	insertatbegin(2);
	printlist();
	deleteHead(head);
	return 0;
}




//search BST 
//15,
//
#include <iostream>
using namespace std;

strcut Node 
{
	int key;
	strcut Node *left;
	strcut Node *right;
	Node(int k){ //constructor initializing k 
		key=k;
		left=right=NULL;
	}
};
bool search(Node *root, int x){
	if(root==NULL)
		return false;
	if(root->key==x)
		return true;
	else if(root->key>x){
		return search(root->left,x);
	}else{
		return search(root->right,x);

	}
}
int main()
{ 
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int x=16;

	if(search(root,x))
		cout<<"FOUND";
	else
		cout<<"NOT FOUND";
}

//AUXILARY SPACE BY RECURSIVE :o(N)
//BY ITERATIVE :o(1)
//TIME COMP: /O(h)	
//normal bst height is the time compl, but in case of self balancing bst is O(logn)

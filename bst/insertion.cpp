#include<iostream>
#include<vector>
using namespace std;

struct Node {
	int key;
	 struct Node *left;
	 struct Node *right;
	 
	 Node(int k){
		 key = k;
		 left = right = NULL;
	 }
};

Node *insert (Node *root,int x)
{
	if(root == NULL)
		return new Node(x);
	if(root->key < x)
		root->right = insert(root->right,x);
	else if(root->key >x)
		root->left = insert(root->left, x);
	return root;
}

void inorder(Node *root)
{
	if(root !=NULL)
	{
		inorder(root->left);
		cout<<root->key<<""<<endl;
		inorder(root->right);
	}
}
int main(){
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(12);
	root->right->right = new Node(40);
	root->left->left = new Node(5);
	root->left->right = new Node(26);
	


	//if want to insert bunch of numbers , not only x
	vector<int> numbers = {200,230,120,144};

	for(int i=0;i<numbers.size();i++){
		root = insert(root, numbers[i]);
	}
	inorder(root);
}



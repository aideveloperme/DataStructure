#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val): data(val),left(nullptr),right(nullptr){}
};
void preorder(Node* root, vector<int>& arr){

	if(root == nullptr)
	{
		return;
	}
	arr.push_back(root->data);
	preorder(root->left,arr);
	preorder(root->right,arr);
}
vector<int> preorder(Node* root){
	vector<int> arr; // need a empty vector to store the result 
	preorder(root,arr); //calling recursive function, send root and empty arr to helper func that will fill it 
	return arr;  //filled with preorder values and return it 
}
int main(){
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	
	vector<int> result = preorder(root);
	cout<<"preorder traversal is ";
	for(int val:result){
		cout<<val<<" ";
	}
	cout<<endl;
return 0;
}

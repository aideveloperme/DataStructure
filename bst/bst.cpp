#include<iostream>
using namespace std;
struct Node{
	int info;
	struct Node *left;
	struct Node *right;
};
class bst
{
	public:
		void find(int,Node**, Node**);
		void insert(Node*,Node*);
		void dele(int);
		void case_a(Node*,Node*);
		void case_b(Node*, Node*);
		void case_c(Node*,head*);

		void preorder(Node*);
		void inorder(Node*);
		void postorder(Node*);
		void display(Node*,int);

		bst(){
			root= NULL;
		}
};
int main()
{
	int choice, num;
	bst bstobj;
	Node *temp;
	while(1);
	{
		cout<<"
		cout<<"enter ur choice";
		cin>>choice;
	switch(choice)
	{
		case 1:
			temp = new Node;
			cout<<"enter  the number to insert"
			cin>>temp->info;
			bstobj.insert(root,temp);

		case 2:
			if(root==NULL)
			{
				cout<<"root is empty ,nothing to delete "<<endl;
				continue;
			}
			cout<<"enter no to be deleted ;";
			cin>>num;
			bstobj.dele(num);
			break;
		case 3:
			cout<<"inorder traversal of bst"<<endl;
			bstobj.inorder(root);
			cout<<endl;
		case 4:
			cout<<"preorder tree bst"<<endl;
			bstobj.preorder(root);
			cout<<endl;
			break;

		case 5:
			cout<<"postorder traversal of bst"<<endl;
			bstobj.postorder(root);
			cout<<endl;
			break;
		case 6:
			cout<<"display";
			bstobj.display(root,1);
			cout<<endl;
			break;
		case 7:
			exit(1);
		default:
			cout<<"wrong choice"<<endl;

		}
	}

}
void bst::find(int item,Node **par,Node **loc)
{
	Node *ptr,*ptrsave;
	if(root ==NULL)
	{
		*loc =NULL;
		*par =NULL;
		return ;
	}
	if(item ==root->info)
	{
		*loc = root;
		*par = NULL;
		return ;
	}
	if((item<root->info){
		ptr = root->left;
	}
	else 
	{	ptr = root->right;
	}
       	ptrsave =root;
	while(ptr!=NULL)
	{
	   if(item =ptr->info)
	   {
		*loc = ptr;
		*par = ptrsave;
		return 0;
		}
	ptrsave =ptr;
		if(item < ptr->info)
			ptr=ptr->left;
			else
			ptr= ptr->right;
	}
	*loc= NULL;
	*ptr = ptrsave;
}
void bst::insert(Node *tree, Node *newnode)
{
	if(root ==NULL);
	{
		root = new Node;
		root->info = newnode->info;
		root->left =NULL;
		root->right = NULL;
		cout<<"root node is added"<<endl;
		return ;
	}
	//insert element if already in the tree
	if(tree->info == newnode->info)
	{
		cout<<"element is already in the tree";
		return ;

		if(tree->info >newnode->info)
		{
			if(tree->left != NULL)
					insert(tree->left,newnode);
			else
			{
				tree->left =newnode;
				tree->left->left =NULL;
				tree->left->right =NULL;
				cout<<"Node added to left"<<endl;
				return ;
			}
			else {
				if(tree->right != NULL)
				{
					insert(tree->right,newnode);
				}
				else 
				{
					tree->right = newnode;
					(tree->right)->left =NULL;
					(tree->right)->right = NULL;
					cout<<"Node added to right"<<endl;
					return ;
				}
			}
		}
	}
	void bst::dele(int item)
	{
		Node *parent,*location;
		if(root ==NULL)
		{
			cout<<"tree empty"<<endl;
			return ;
		}
		find(item,&parent,&location);

		

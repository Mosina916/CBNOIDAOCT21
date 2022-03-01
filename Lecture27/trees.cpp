#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	// constructor
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* buildtree(){
	int data;
	cin>>data;//8
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=buildtree();
		root->right=buildtree();
		return root;

	}
}

void preorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	cout<<root->data<<" ";
	preorderprint(root->left);
	preorderprint(root->right);
}



void inorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	
	inorderprint(root->left);
	cout<<root->data<<" ";
	inorderprint(root->right);
}


void postorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	
	postorderprint(root->left);//lst
	
	postorderprint(root->right);//rst
	cout<<root->data<<" ";
}

int countnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// recursive 
	return 1+countnodes(root->left)+countnodes(root->right);
}

int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// /recursive case
	return max(heightoftree(root->left),heightoftree(root->right))+1;
}

int diameteroftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	int op1=diameteroftree(root->left);
	int op2=diameteroftree(root->right);
	int op3=heightoftree(root->left)+heightoftree(root->right);
	return max(op1,max(op2,op3));
}
// fast diamter o(n)


class Pair{
public:
	int dia;
	int height;
	Pair(){
		dia=0;
		height=0;
	}
};

Pair fastdiameter(node*root){
	Pair p;
	// base case
	if(root==NULL){
		return p;
	}



	// recursive case
	Pair l=fastdiameter(root->left);
	Pair r=fastdiameter(root->right);
	// height
	p.height=max(l.height,r.height)+1;

	// diameter
	int op1=l.dia;
	int op2=r.dia;
	int op3=l.height+r.height;
	p.dia=max(op1,max(op2,op3));
	return p;

}


int sumofnodes(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	node*root=buildtree();
	cout<<"preorderprint is : ";
	preorderprint(root);
	cout<<endl;
	cout<<"inorderprint is : ";
	inorderprint(root);
	cout<<endl;
	cout<<"postorderprint is : ";
	postorderprint(root);
	cout<<endl;


	cout<<"count of nodes is "<<countnodes(root)<<endl;

	cout<<"heightoftree is "<<heightoftree(root)<<endl;
	cout<<"diameteroftree is : "<<diameteroftree(root)<<endl;
	Pair x=fastdiameter(root);
	cout<<"diameteroftree is : "<<x.dia<<endl;

	cout<<"heightoftree is "<<x.height<<endl;
	cout<<"sumofnodes is "<<sumofnodes(root)<<endl;









	return 0;
}
#include<iostream>
#include<queue>
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


// mirror of bt
void mirrorofbt(node*&root){
	// base case
	if(root==NULL){
		return;
	}



	// recursive case
	swap(root->left,root->right);
	mirrorofbt(root->left);
	mirrorofbt(root->right);
}

void printlevelwise(node*root){
	queue<node*>q;
	q.push(root);
	q.push(nullptr);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		if(x==nullptr){
			cout<<endl;
			if(!q.empty()){
				q.push(nullptr);
			}

		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}

		}
	}


}
node* buildtreelevelwise(){
	int data;
	cout<<"enter the data of root"<<endl;
	cin>>data;//8
	if(data==-1){
		return NULL;
	}

	node*root=new node(data);
	queue<node*>q;
	q.push(root);

// loop
	while(!q.empty()){
			node*x=q.front();
	q.pop();
	cout<<"Enter the children of "<<x->data<<endl;

	int leftchild,rightchild;
	cin>>leftchild;//-1
	cin>>rightchild;//14

	if(leftchild!=-1){
		x->left=new node(leftchild);
		q.push(x->left);

	}
	if(rightchild!=-1){
		x->right=new node(rightchild);
		q.push(x->right);

	}


	}

	return root;




}

void preorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	cout<<root->data<<",";
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
	cout<<root->data<<",";
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


// 8,10,1,6,4,7,3,14,13,-->preorder
// 1,10,4,6,7,8,3,13,14,--->inorderprint
int pre[]={8,10,1,6,4,7,3,14,13};
int inor[]={1,10,4,6,7,8,3,13,14};

int i=0;

node* createtreeusingpreansin(int s,int e){//0 8

// base case
	if(s>e){
		return NULL;
	}


	// /recursive case
	int d=pre[i];//10
	i++;//3
	int k=-1;
	for(int j=s;j<=e;j++){
		if(inor[j]==d){
			k=j;
			break;

		}
	}

	node*root=new node(d);
	root->left=createtreeusingpreansin(s,k-1);
	root->right=createtreeusingpreansin(k+1,e);


	return root;


}


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	
	int n=sizeof(pre)/sizeof(int);

	node*root=createtreeusingpreansin(0,n-1);
	// node*root=buildtree();
	// node*root=buildtreelevelwise();
	printlevelwise(root);
	// mirrorofbt(root);
	// cout<<endl;
	// 	cout<<endl;

	// printlevelwise(root);

	// preorderprint(root);
	// cout<<endl;
	// inorderprint(root);




	return 0;
}
#include<iostream>
#include<queue>
#include<climits>
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



// fast diamter o(n)



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

node* insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}

	else if(data<=root->data){
		root->left=insertinbst(root->left,data);
		return root;

	}
	else{
		root->right=insertinbst(root->right,data);
		return root;

	}



}

node* buildbinsrysearchtree(){
	node*root=NULL;
	int data;
	cin>>data;//8

// loop
	while(data!=-1){
		root=insertinbst(root,data);
		cin>>data;//-1

	}
	return root;
	

}

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

bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}


	// recursive case
	if(root->data>=min&&root->data<=max&&isbstornot(root->left,min,root->data)&&isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;

}
void printinarangek1k2(node*root,int k1,int k2){


	// base case
	if(root==NULL){
		return;
	}



	// recursive case

	printinarangek1k2(root->left,k1,k2);
	if(root->data>=k1&&root->data<=k2){
		cout<<root->data<<" ";
	}
	printinarangek1k2(root->right,k1,k2);

}

class Pair{
public:

	int height;
	bool isbalaned;
	Pair(){
		height=0;
		isbalaned=true;
	}
};
Pair isheightbalanedornot(node*root){
	Pair p;

	// base case
	if(root==NULL){

		return p;
	}


	// recursive case
	Pair l=isheightbalanedornot(root->left);
	Pair r=isheightbalanedornot(root->right);
	p.height=max(l.height,r.height)+1;
	if(l.isbalaned==true&&r.isbalaned==true&&abs(l.height-r.height)<=1){
		p.isbalaned=true;


	}
	else{
		p.isbalaned=false;
	}
	return p;

}


class linkkelist{
public:
	node*head;
	node*tail;
	linkkelist(){
		head=NULL;
		tail=NULL;
	}
};

linkkelist bsttoll(node*root){
	linkkelist l;

	// base case
	if(root==NULL){
		return l;
	}


	// recursive case
	// case 1 bst single node
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}
// single child
	// case 2 1 part lst exist karta 
	else if(root->left!=NULL&&root->right==NULL){
		linkkelist l1=bsttoll(root->left);
		l1.tail->right=root;
		l.head=l1.head;
		l.tail=root;
		// return l;
	}
	// case 2 1 part rst exist karta 
	else if(root->left==NULL&&root->right!=NULL){
		linkkelist l2=bsttoll(root->right);
		root->right=l2.head;
		l.head=root;
		l.tail=l2.tail;
		
		// return l;
	}


	// case 3 both children
	else{
		linkkelist l1= bsttoll(root->left);
		linkkelist l2= bsttoll(root->right);
		l1.tail->right=root;
		root->right=l2.head;
		l.head=l1.head;
		l.tail=l2.tail;
		// return l;
	}


	return l;






}

void printll(node*head){	

	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->right;

	}

	cout<<endl;
	




}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
	
	// int n=sizeof(pre)/sizeof(int);

	// node*root=createtreeusingpreansin(0,n-1);
	// int arr[]={2,4,7,9,10,12,13};
	// int n=sizeof(arr)/sizeof(int);
	// createrbstusingarr(arr,)

	node*root=buildbinsrysearchtree();

	// // node*root=buildtree();

	// printlevelwise(root);
	linkkelist x= bsttoll(root);


	printll(x.head);
	


	





	return 0;
}
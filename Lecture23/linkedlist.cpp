#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	// constructor
	node(int d){
		data=d;
		next=NULL;
	}
};
void insertatfront(node*&head,node*&tail,int data){
	node*n=new node(data);
	// ll is empty
	if(head==NULL){
		head=n;
		tail=n;


	}
	else{
		n->next=head;
		head=n;
	}


}

void insertattail(node*&head,node*&tail,int data){
	// agar ll exist nahi karta
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;


	}
	else{
		tail->next=n;
		tail=n;
	}



}

void printll(node*head){
	// node*temp=head;
	// while(temp!=NULL){
	// 	cout<<temp->data<<"-->";
	// temp=temp->next;

	// }
	// cout<<endl;
	while(head!=NULL){
		cout<<head->data<<"-->";
	head=head->next;

	}

	cout<<endl;

}
int length(node*head){
	int cou=0;

	while(head!=NULL){
		cou++;
	head=head->next;

	}
	return cou;
	

}

int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenrec(head->next);
}
void insertatanypos(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	// else if(pos>=length(head)){
	else if(pos>=lenrec(head)){
		insertattail(head,tail,data);
	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
}
void delteatfront(node*&head,node*&tail){
	// case 1 -->ll empty
	if(head==NULL){
		return;
	}
	// case 2 -->ll only node is there
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;

	}
}

void delteteattail(node*&head,node*&tail){
	// case 1 -->ll empty
	if(head==NULL){
		return;
	}
	// case 2 -->ll only node is there
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{
		node*temp=head;

		// loop
		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		tail=temp;
		tail->next=NULL;
		
	

	}

}

bool findelerec(node*head,int key){
	// base case
	if(head==NULL){
		return false;
	}



	// recursive case
	if(head->data==key){
		return true;

	}
	return findelerec(head->next,key);
}
// int midoflinkedlist(node*head){
// 	node*slow=head;
// 	node*fast=head;

// 	while(fast!=NULL&&fast->next!=NULL){
// 		fast=fast->next->next;
// 		slow=slow->next;

// 	}
// 	return slow->data;
	
// }
int midoflinkedlist(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;

	}
	return slow->data;
	
}

int main(){
	// node n1(5);
	// node n2(9);
	// n1.next=&n2;
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
	// cout<<n1.data<<" "<<n1.next->data<<endl;

	node*head=NULL;
	node*tail=NULL;

	// int n,data;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	cin>>data;
	// 	insertatfront(head,tail,data);
	// }
	// printll(head);
	insertatfront(head,tail,1);
	insertatfront(head,tail,16);
	insertatfront(head,tail,9);
	insertatfront(head,tail,6);

	// // printll(head);
	// // printll(head);
	insertattail(head,tail,17);
		insertattail(head,tail,23);

	printll(head);

	cout<<"mid of ll is "<<midoflinkedlist(head)<<endl;
	// insertattail(head,tail,23);
	// // printll(head);
	// insertatanypos(head,tail,90,3);
	// delteatfront(head,tail);
	// delteatfront(head,tail);
	// delteteattail(head,tail);
	// printll(head);
	// if(findelerec(head,6)){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }
	

	return 0;
}
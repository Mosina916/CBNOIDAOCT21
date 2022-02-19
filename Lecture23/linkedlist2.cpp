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

void printll(node*head){
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


int midoflinkedlist(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;

	}
	return slow->data;
	
}

int kthnodefromend(node*head,node*tail,int k){
	node*slow=head;
	node*fast=head;
	for(int jump=1;jump<=k;jump++){
		fast=fast->next;
	}
	while(fast!=NULL){
		fast=fast->next;
		slow=slow->next;

	}
	return slow->data;
}

int main(){

	node*head=NULL;
	node*tail=NULL;
	insertatfront(head,tail,1);
	insertatfront(head,tail,16);
	insertatfront(head,tail,9);
	insertatfront(head,tail,6);
	insertatfront(head,tail,19);
	insertatfront(head,tail,65);
	printll(head);
	cout<<"kth node from end "<<kthnodefromend(head,tail,4)<<endl;


	

	return 0;
}
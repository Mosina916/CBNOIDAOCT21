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


// int midoflinkedlist(node*head){
// 	node*slow=head;
// 	node*fast=head->next;

// 	while(fast!=NULL&&fast->next!=NULL){
// 		fast=fast->next->next;
// 		slow=slow->next;

// 	}
// 	return slow->data;
	
// }

node* midoflinkedlist(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;

	}
	return slow;
	
}

void bubblesort(node*head){
	for(int i=0;i<=length(head)-2;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){
			if(temp->data>temp->next->data){
				swap(temp->data,temp->next->data);
			}
		}
	}
}


node*mergetwosortedll(node*&h1,node*&h2){
	// case 1 -->h1 is null
	if(h1==NULL){
		return h2;
	}
	// case 1 -->h2 is null
	else if(h2==NULL){
		return h1;
	}
	// case 3-->both ll exist
	else{
		node*newllh;
		if(h1->data<h2->data){
			newllh=h1;
			newllh->next=mergetwosortedll(h1->next,h2);
			// return newllh;

		}
		else{
			newllh=h2;
			newllh->next=mergetwosortedll(h1,h2->next);
			// return newllh;


		}
		return newllh;

	}


}


node* mergesort(node*head){
	// base case
	if(head==NULL||head->next==NULL){
		return head;
	}
	


	// /recursive case
	// mid
	node*ma=midoflinkedlist(head);
	// divide
	node*temp=ma->next;
	ma->next=NULL;
	head=mergesort(head); 
	temp=mergesort(temp);

	node*sll=mergetwosortedll(head,temp);
	return sll;


}

node* reversell(node*&head){
	node*curr=head;
	node*prev=NULL;
	// node*forward=NULL;
	while(curr!=NULL){
	node*forward=curr->next;
	curr->next=prev;
	prev=curr;
	curr=forward;

	}
	head=prev;
	return  head;
	

}

bool iscyclic(node*head){
	node*slow=head;
	node*fast=head;

// loop
	while(fast!=NULL&&fast->next!=NULL){
	fast=fast->next->next;
	slow=slow->next;
	if(fast==slow){
		return true;
	}
}
return false;

}

void createcycle(node*head,node*tail){
	tail->next=head->next->next;

}

void breakcycle(node*head){
	// is cycle present or not
		node*slow=head;
	node*fast=head;
	node*prev=NULL;

// loop
	while(fast!=NULL&&fast->next!=NULL){
		prev=slow;
	fast=fast->next->next;
	slow=slow->next;
	if(fast==slow){
		break;
	}
}
	slow=head;

// loop
	while(fast!=slow){
		prev=prev->next;
		slow=slow->next;
		fast=fast->next;

	}
	prev->next=NULL;
	
	

}

int main(){

	// node*head=NULL;
	// node*tail=NULL;
	// insertatfront(head,tail,1);
	// insertatfront(head,tail,16);
	// insertatfront(head,tail,9);
	// insertatfront(head,tail,6);
	// insertatfront(head,tail,19);
	// insertatfront(head,tail,65);
	// printll(head);

	// bubblesort(head);
	// cout<<"After bubble sort"<<endl;
	// node*h1=NULL;
	// node*t1=NULL;
	// node*h2=NULL;
	// node*t2=NULL;

	// int n,m,data;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>data;
	// 	insertatfront(h1,t1,data);
	// }


	// cin>>m;
	// for (int i = 0; i <m; ++i)
	// {
	// 	cin>>data;
	// 	insertatfront(h2,t2,data);
	// }

	// node*fhead=mergetwosortedll(h1,h2);


	node*h1=NULL;
	node*t1=NULL;
	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>data;
		insertatfront(h1,t1,data);
	}

	printll(h1);
	// reversell(h1);
	// printll(h1);

	// node*fhead=mergesort(h1);
	if(iscyclic(h1)){
		cout<<"cyclic "<<endl;
	}
	else{
		cout<<"Not cyclic"<<endl;

	}

	createcycle(h1,t1);
	// 	if(iscyclic(h1)){
	// 	cout<<"cyclic "<<endl;
	// }
	// else{
	// 	cout<<"Not cyclic"<<endl;

	// }

	breakcycle(h1);

	printll(h1);






	// printll(fhead);



	

	return 0;
}
#include<iostream>
using namespace std;

class node{
public:
	
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;

	}
};
class Queue{
	node*head;
	node*tail;
	int len;
	
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
		
	}

	// push 
	void push(int data){//7 9 8 18 19

		node*n=new node(data);
		if(head==NULL){
			head=n;
			tail=n;
			// len++;
		}
		else{
			tail->next=n;
		tail=n;
		// len++;
	

		}
		len++;
		

	}


	// pop
	void pop(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
			tail=NULL;
			len--;

		}
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}
		
		
	}


	// size
	int size(){
		return len;
		
	}


	// empty
	bool empty(){
		return len==0;
		

	}


	// front
	int front(){
		return head->data;
		
	}




};
int main(){
	Queue q; //7 9 8 18 19
	q.push(7);
	q.push(9);
	q.push(8);
	q.push(18);
	q.push(19);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	

	}
	

	return 0;
}
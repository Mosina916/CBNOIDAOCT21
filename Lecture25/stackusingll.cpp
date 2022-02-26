#include<iostream>
#include<vector>
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
class Stack{
	node*head;
	int len;

public:
	Stack(){
		head=NULL;
		len=0;
	

	}
	

	// push
	// insert at front
	void push(int data){
		node*n=new node(data);
		n->next=head;
		head=n;
		len++;
	}

	// pop
	// delete at front
	void pop(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
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

	// top
	int top(){
		return head->data;
	}
	
	// size
	int size(){
		return len;

	}

	// empty
	bool empty(){
		return head==NULL;
	}


};
int main(){
	Stack s;
	s.push(6);
	s.push(26);
	s.push(68);
	s.push(67);
	s.push(20);
	s.push(8);
	// for(int i=s.size()-1;i>=0;i--){
	// 	cout<<s.v[i]<<" ";
	// 	// s.pop()
	// }

	// cout<<endl;


	// cout<<s.v[3]<<endl;

	while(s.empty()==false){
		cout<<s.top()<<endl;
	s.pop();


	}
	


	return 0;
}
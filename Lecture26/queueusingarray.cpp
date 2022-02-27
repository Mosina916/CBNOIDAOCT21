#include<iostream>
using namespace std;
class Queue{
	int*arr;
	int f;
	int r;
	int ts;
	int cs;
public:
	Queue(int size=5){
		arr=new int[size];
		ts=size;
		cs=0;
		r=size-1;
		f=0;

	}

	// push 
	int push(int data){//7 9 8 18 19
		if(cs<ts){
			r=(r+1)%ts;
		arr[r]=data;
		cs++;

		}
		else{
			cout<<"overflow"<<endl;
		}

	}


	// pop
	void pop(){
		if(cs>0){
			f=(f+1)%ts;
			cs--;

		}
		else{
			cout<<"underflow"<<endl;
		}
		
	}


	// size
	int size(){
		return cs;
	}


	// empty
	bool empty(){
		return cs==0;

	}


	// front
	int front(){
		return arr[f];
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
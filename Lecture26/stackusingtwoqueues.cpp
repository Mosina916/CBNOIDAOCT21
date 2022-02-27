#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class Stack{
	queue<int>q1;
	queue<int>q2;
public:
	// push
	void push(int data){
		if(q1.empty()&&q2.empty()){
			// i am choosing q1 data push 
			q1.push(data);

		}
		else if(!q1.empty()&&q2.empty()){
			q1.push(data);
		}
		else{
			q2.push(data);
		}


	}


	// pop
	void pop(){
		if(!q1.empty()&&q2.empty()){

			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();

			}
			q1.pop();
		}
		else if(!q2.empty()&&q1.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
		else{
			cout<<"underflow "<<endl;

		}

	}



	// empty
	bool empty(){
		// if(q1.empty()&&q2.empty()){
		// 	return true;
		// }
		// return false;

		return q1.empty()&&q2.empty();




	}

	// top
	int top(){
		int ele=INT_MAX;
		if(!q1.empty()&&q2.empty()){

			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();

			}
			ele=q1.front();//3
			q2.push(q1.front());
			q1.pop();
			return ele;
		}
		else if(!q2.empty()&&q1.empty()){
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			ele=q2.front();//3
			q1.push(q2.front());
			q2.pop();
			return ele;
		}
		else{
			cout<<"underflow "<<endl;

		}

		return ele;

	}


	// size
	int size(){
		if(!q1.empty()){
			return q1.size();
		}
		else if(!q2.empty()){
			return q2.size();

		}
		else{
			return 0;
		}

	}
};
int main(){
	Stack s;
	s.push(6);
	s.push(16);
	s.push(60);
	s.push(89);
	// s.pop();
	s.push(79);
	s.pop();
	// s.pop();
	// s.pop();
	// s.pop();


	// if(!q1.empty()){

	// }
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	 



	return 0;
	}
		

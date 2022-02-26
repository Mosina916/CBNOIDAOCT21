#include<iostream>
#include<vector>
using namespace std;
class Stack{
		vector<int>v;  

public:
	// Stack(){
	

	// }
	

	// push
	void push(int d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}
	// top
	int top(){
		return v[v.size()-1];
	}


	// size
	int size(){
		return v.size();
	}


	// empty
	bool empty(){
		// if(v.size==0){
		// 	return true;
		// }
		// return false;
		return v.size()==0;
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
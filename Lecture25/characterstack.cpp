#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class Stack{
		vector<T>v;  

public:
	// Stack(){
	

	// }
	

	// push
	void push(T d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}
	// top
	T top(){
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
	Stack<char> s;
	s.push('d');
	
	s.push('A');
	s.push('d');
	
	s.push('A');
	s.push('d');
	
	s.push('A');
	s.push('d');
	
	s.push('A');
	s.push(65);
	
	s.push('A');
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
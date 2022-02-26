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

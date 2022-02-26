#include<iostream>
#include "stack.h"
using namespace std;
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
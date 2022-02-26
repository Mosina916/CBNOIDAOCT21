#include<iostream>
#include<stack>
using namespace std;

int main(){
	// stack<int>s;
	// s.push(6);
	// s.push(26);
	// s.push(68);
	// s.push(67);
	// s.push(20);
	// s.push(8);

	stack<char>s;
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
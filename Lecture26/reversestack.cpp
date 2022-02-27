#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int ele){
	// base case
	if(s.empty()){
		s.push(ele);
		return;
	}



	// recursive case
	int x=s.top();//3  6 9
	s.pop();
	insertatbottom(s,ele);
	s.push(x);

}
void reversestack(stack<int>&s){

	// base case
	if(s.empty()){
		return;
	}

	// recursive case
	int te=s.top();
	s.pop();
	reversestack(s);
	insertatbottom(s,te);//2

}
void printstack(stack<int>s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int>s;
	s.push(3);
	s.push(6);
	s.push(9);
	s.push(2);
	reversestack(s);

	printstack(s);


	return 0;
}
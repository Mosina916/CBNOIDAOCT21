#include<iostream>
#include<stack>
using namespace std;
bool isbalaned(char *arr){
	
	stack<char>s;
	for(int i=0;i<arr[i]!='\0';i++){
		char ch=arr[i];//{
	switch(ch){
		case '{':
		case '[':
		case '(':s.push(ch);
				break;

		case ')':
		if(!s.empty()&&s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case ']':
		if(!s.empty()&&s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case '}':
		if(!s.empty()&&s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;


	}


	}
	if(s.empty()){
		return true;
	}
	return false;
	




}



int main(){
	
	// // char arr[]="{[()]]})";
	// char arr[]="{{()}}";
	// if(isbalaned(arr)){
	// 	cout<<"balanced"<<endl;
	// }
	// else{
	// 	cout<<"not balaned"<<endl;
	// }



	cout<<"\"\"";

	return 0;
}
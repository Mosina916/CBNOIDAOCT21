#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base case
	if(l==0){
		return 0;
	}


	// recursive case
	int digit=s[l-1]-'0';//'6'-'0'//54-48--6


	return stringtoint(s,l-1)*10+digit;//394*10-->3940+6-->3946



}
int main(){
	string s;
	cin>>s;//"3946"
	// cout<<s+100<<endl;
	int l=s.length(); //4
	cout<<stringtoint(s,l)<<endl;


	// cout<<no+100<<endl;

	// cout<<no<<endl;

	return 0;
}
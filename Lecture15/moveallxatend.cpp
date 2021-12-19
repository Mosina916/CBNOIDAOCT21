#include<iostream>
using namespace std;
string moveallxatend(string s){
	// base case 
	if(s.length()==0){
		return "";
	}



	// recursive case 
	string chotastring=s.substr(0,1);//"a"  "x"
	string recstring=moveallxatend(s.substr(1));//"bbxx"
	if(chotastring=="x"){
		string badistring=recstring+chotastring;//"bbxx"+"x"
		return badistring;
	}
	else{
		string badistring=chotastring+recstring;//"a"+"bbxx"-->abbxx

		return badistring;
	}

}

int main(){
	string s;
	cin>>s;//"axbxb";
	cout<<moveallxatend(s)<<endl;

	


	return 0;
}
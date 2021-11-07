#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//'R'

	// 1st way
	// if(ch>='A' and ch<='Z'){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;
	// }
	// // 2nd way

	// if(ch>=65 and ch<=90){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"invalid character"<<endl;
	// }

	// way 3
	if(isupper(ch)){
		cout<<"UPPERCASE"<<endl;

	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"invalid character"<<endl;
	}



	return 0;
}
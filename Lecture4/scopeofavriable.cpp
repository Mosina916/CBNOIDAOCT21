#include <iostream>
using namespace std;
int z=7584;//global variable
int main(){ 


	int x=10;
	int y=90;
	int z=890;
	if(x>=10){
		int y=50;
		cout<<"x "<<x<<endl;
		cout<<"y "<<y<<endl;
	}

	if(x==10){
		int a=250;
		int z=90;
		int x=60;
		cout<<"a "<<a<<endl;
		cout<<"y "<<y<<endl;
		cout<<"z "<<z<<endl;
		cout<<"x "<<x<<endl;

	}
		// cout<<"a "<<a<<endl;
		cout<<"y "<<y<<endl;
		cout<<"z "<<::z<<endl;
	return 0;
}



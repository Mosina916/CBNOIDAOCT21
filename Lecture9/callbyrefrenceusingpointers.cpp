#include<iostream>
using namespace std;
void update(int*z){
	*z=*z+20;


	cout<<*z<<endl;

}
int main(){
	int c=70;
	cout<<"value of c is : "<<c<<endl;
	// int*z=&c;

	update(&c);

	cout<<"value of c after update in main is : "<<c<<endl;




	return 0;
}
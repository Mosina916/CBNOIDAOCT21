#include<iostream>
using namespace std;
void update(int a){
	a=a+1;

	cout<<"a inside update function : "<<a<<endl;//11
	

}
int main(){
	int a=10;
	cout<<"a inside main : "<<a<<endl;//10
	update(a);
	cout<<"a inside main after update : "<<a<<endl;
	


	return 0;



}







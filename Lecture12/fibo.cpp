#include<iostream>
using namespace std;
int fibo(int n){//0

	// base case
	if(n==1||n==0){
		return n;
	}
	




	// recursive case
	// int chotaans1=fibo(n-1);//2

	// int chotaans2=fibo(n-2);//1

	// // calculate
	// int fans=chotaans1+chotaans2;
	// return fans;

	return fibo(n-1)+fibo(n-2);


}

int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;

	



	return 0;
}
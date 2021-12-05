#include<iostream>
using namespace std;
int main(){
// 	int a=80;
// 	float b=49.78;
// 	double d=654.78;
// 	cout<<"value of a is "<<a<<endl;
// 	cout<<"value of b is "<<b<<endl;
// 	cout<<"value of d is "<<d<<endl;


// 	cout<<"size of a is "<<sizeof(a)<<endl;
// 	cout<<"size of b is "<<sizeof(b)<<endl;
// 	cout<<"size of d is "<<sizeof(d)<<endl;


// 	cout<<"address of a is "<<&a<<endl;
// 	cout<<"address of b is "<<&b<<endl;
// 	cout<<"address of d is "<<&d<<endl;



// 	cout<<"address of a is "<<sizeof(&a)<<endl;
// 	cout<<"address of b is "<<sizeof(&b)<<endl;
// 	cout<<"address of d is "<<sizeof(&d)<<endl;


// 	char ch='D';

// 	cout<<"value of ch is "<<ch<<endl;
// 	cout<<"size of ch is "<<sizeof(ch)<<endl;
// 	cout<<"address of ch is "<<(int*)&ch<<endl;
// // folling of compiler
// 	cout<<"address of ch is "<<(float*)&ch<<endl;
// 	cout<<"address of ch is "<<(double*)&ch<<endl;
// 	cout<<"address of ch is "<<(void*)&ch<<endl;
// 	cout<<"address of ch is "<<sizeof(&ch)<<endl;


	int a=90;
	// int*aptr=&a;//initilization

	int*aptr;//decleartion
	aptr=&a;//assignment


	cout<<&a<<" "<<aptr<<endl;


	// with the  help of pointer aptr i want to increase  value of bucket a by 20;

	// *aptr=*aptr+20;
	a=*aptr+20;


	cout<<*aptr<<endl;//the derefrence operator
















	return 0;
}
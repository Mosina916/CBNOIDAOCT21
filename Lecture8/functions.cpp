#include<iostream>
using namespace std;

// return type nameofthefunction(){
// 	// task
// }
// no return no argument
void printstatement(){//function decleration
	// function definition
	cout<<"hello world"<<endl; //
	cout<<"coding blocks"<<endl;
	cout<<"this is a pen"<<endl;
	cout<<"humpty dumpty"<<endl;



}
// // no return with arguments
// void mult(int a,int b){//parametrs/arguments


// 	int mu=a*b;
// 	cout<<"mult is : "<<mu<<endl;


// }
// return arguments
float addof3(int x,float f,int z){
	float s=x+f+z;
	return s;
}

// return no arguments
int sumof2nos(){
	int x,y;//10/89
	cin>>x>>y;
	int sum=x+y;
	return sum;
}


// void sum(int a){
// 	cout<<a<<endl;
// }


// void sum(int a,int b){
// 	cout<<a+b<<endl;
// }


// void sum(int a,int b,int c){
// 	cout<<a+b+c<<endl;
// }


// void sum(int a,int b,int c,int d){
// 	cout<<a+b+c+d<<endl;
// }


sum(int a=0,int b=0,int c=0,int d=0,int e=0){//default arguments
	cout<<a+b+c+d+e<<endl;

}


void mult(int a,int b);//forawrd decleration

int main(){

	// task 1

	// int a=60,b=70;

	// cout<<"sum is : "<<a+b<<endl;


	// task 2

	// functionname();
	printstatement();//function calling

	printstatement();
	printstatement();
	printstatement();
	printstatement();
	int s=sumof2nos();
	cout<<s<<endl;

	cout<<sumof2nos()<<endl;


	mult(5,7);

	cout<<addof3(6,4.7,8)<<endl;




	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;

	// cout<<"hello world"<<endl;
	// cout<<"coding blocks"<<endl;
	// cout<<"this is a pen"<<endl;
	// cout<<"humpty dumpty"<<endl;


	// task 
	// cout<<"mult is : "<<a*b<<endl;


	sum(5);
	sum(6,7);
	// sum(7,5,3);
	sum(9,84,2,8);
	



	return 0;
}

// no return with arguments
void mult(int a,int b){//parametrs/arguments


	int mu=a*b;
	cout<<"mult is : "<<mu<<endl;


}


bool israinig(){
	return true;
}







#include<iostream>
using namespace std;
int main(){

	int radius=2;
	// int* radptr=&radius;

	int* radptr=NULL;

	radptr=&radius;


	// cout<<2*3.14*radius<<endl;

	cout<<2*3.14*(*radptr)<<endl;












	return 0;
}
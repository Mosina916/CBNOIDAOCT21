#include<iostream>
using namespace std;
int main(){
	// int m1,m2,m3,m4,m5;
	// m1=10;
	// m2=59;
	// m3=68;
	// m4=43;
	// m5=29;
	// cout<<m1<<endl;
	// datatype arranmame[sizeofarray]
	// int marks[5]={10,59,68,43,29};

	// print 

	// cout<<marks[0]<<endl;
	// cout<<marks[1]<<endl;
	// cout<<marks[2]<<endl;
	// cout<<marks[3]<<endl;
	// cout<<marks[4]<<endl;


	// for(int i=0;i<=4;i++){
	// 	cout<<marks[i]<<endl;
	// }

// ignore size
	// int marks[]={10,59,68,43,29,29,4,5,877,9,345,234,23,342,7};
	// int tb=sizeof(marks)/sizeof(int);

	// cout<<tb<<endl;

	// for(int i=0;i<=tb-1;i++){
	// 	cout<<marks[i]<<" ";
	// }
	// cout<<endl;


	int arr[100];
	// int arr[1000000];

	int tcs;
	cin>>tcs;//10^6
	// int arr[10^6];//galat 
	// int arr[tcs];
	// arr[0]=20;
	// arr[1]=68;
	// arr[2]=2230;
	// arr[3]=23;
	// arr[4]=623;

	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<endl;
	// }

	// cin>>arr[0];
	// cin>>arr[1];
	// cin>>arr[2];
	// cin>>arr[3];
	// cin>>arr[4];


	for(int i=0;i<=tcs-1;i++){
		cin>>arr[i];
	}



	for(int i=0;i<=tcs-1;i++){
		cout<<arr[i]<<endl;
	}













	


	return 0;
}
#include<iostream>
using namespace std;
int main(){

	int arr1[]={1,3,5};
	cout<<arr1<<endl;//address


	// char arr[3]={'P','Q','R'};

	// cout<<arr<<endl;

	// char arr2[3]={'G','H','t'};

	// cout<<arr2<<endl;


	// char arr2[4]={'G','H','t','\0'};

	// cout<<arr2<<endl;

	char arr2[]={'G','H','t','\0'};
	cout<<arr2<<endl;



	// char arr4[6]="Hello";


	// cout<<arr4<<endl;

	char arr4[]="Hello";

	cout<<arr4<<endl;


	// char arr5[100];
	// cin>>arr5;
	// cout<<arr5;


	// char arr6[100];
	// char ch=cin.get();//c

// SENTENCE
	// int i=0;
	// while(ch!='\n'){
	// 	arr6[i]=ch;
	// i++;
	// ch=cin.get();

	// }


	// cout<<arr6<<endl;


	char arr6[100];
	// cin.getline(arrayname,arraysize,dilimiter)
	// cin.getline(arr6,100);

	cin.getline(arr6,100,'$');


	cout<<arr6<<endl;

	









	return 0;
}
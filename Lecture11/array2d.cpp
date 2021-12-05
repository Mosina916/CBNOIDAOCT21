#include <iostream>
using namespace std;
int main(){
	// int arr[4][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9},
	// 	{10,11,12}
	// };


	// int arr[][4]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9},
	// 	{10,11,12}
	// };

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;

	// int arr[4][3];


	// arr[0][0]=1;
	// arr[0][1]=2;


	// // 1st row
	// arr[0][0];
	// arr[0][1];
	// arr[0][2];

	// // 2nd row
	// arr[1][0];
	// arr[1][1];
	// arr[1][2];
	// // 3rd row
	// arr[2][0];
	// arr[2][1];
	// arr[2][2];


	// // 4th row
	// arr[3][0];
	// arr[3][1];
	// arr[3][2];




	// for(int i=0;i<4;i++){
	// 	for(int j=0;j<4;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;

	// }

	// char ch[3][3]={
	// 	{'A','F','G'},

	// 	{'C','A','T'},
	// 	{'D','O','G'}

	// };


	// char ch[][4]={
	// 	{'A','F','G','\0'},

	// 	{'C','A','T','\0'},
	// 	{'D','O','G','\0'}

	// };


	// cout<<ch[0]<<endl;
	// cout<<ch[1]<<endl;
	// cout<<ch[2]<<endl;


	// user input

	// int arr3[1000][1000];

	// int row,col;
	cin>>row>>col;//3/4
	for(int r=0;r<row;r++){
		for(int c=0;c<col;c++){
			cin>>arr3[r][c];
		}
	}


	for(int r=0;r<row;r++){
		for(int c=0;c<col;c++){
			cout<<arr3[r][c]<<" ";
		}
		cout<<endl;
	}


	char arr5[][7]={
		"coding",
		"Dog",
		"cart",
		"qwerty"
	};

	cout<<arr5[0]<<endl;
	cout<<arr5[1]<<endl;
	cout<<arr5[2]<<endl;
	cout<<arr5[3]<<endl;









	return 0;
}
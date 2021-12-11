#include<iostream>
using namespace std;
void spiralprint(char arr[10][10],int rows,int cols){
	int sr=0,sc=0,ec=cols-1,er=rows-1;

// LOop
	char ch='X';
	// pehli row

	while(sc<=ec&&sr<=er){
		for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;
	}

	sr++;


	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;
	for(int l=ec;l>=sc;l--){
		arr[er][l]=ch;
	}
	er--;
	for(int k=er;k>=sr;k--){
		arr[k][sc]=ch;
	}
	sc++;

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}


	}
	






}
int main(){
	// int arr[4][4]={
	// 	{2,4,1,9},
	// 	{3,6,0,5},
	// 	{16,18,13,12},
	// 	{20,42,78,61}
	// };

	char arr[10][10];
	int rows,cols;
	cin>>rows>>cols;


	spiralprint(arr,rows,cols);

	for (int i = 0; i <rows; ++i)
	{
		for (int j = 0; j <cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;



	return 0;
}
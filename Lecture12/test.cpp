#include<iostream>
using namespace std;
void spiralprint(int arr[5][3],int rows,int cols){
	int sr=0,sc=0,ec=cols-1,er=rows-1;

// LOop
	// pehli row
	while(sc<=ec&&sr<=er){
		for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}

	sr++;


	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;
	for(int l=ec;l>=sc;l--){
		cout<<arr[er][l]<<" ";
	}
	er--;
	for(int k=er;k>=sr;k--){
		cout<<arr[k][sc]<<" ";
	}
	sc++;


	}
	






}
int main(){
	// int arr[4][4]={
	// 	{2,4,1,9},
	// 	{3,6,0,5},
	// 	{16,18,13,12},
	// 	{20,42,78,61}
	// };

	int arr[5][3]={
		{2,4,89},
		{3,6,90},
		{16,18,45},
		{20,42,20},
		{78,34,19}
	};


	spiralprint(arr,5,3);



	return 0;
}
#include<iostream>
using namespace std;
void updatearray(int barr[],int n){
	for (int i = 0; i <n; ++i)
	{
		barr[i]=barr[i]+1;
	}
	for (int i = 0; i <n; ++i)
	{
		cout<<barr[i]<<" ";
	}
	cout<<endl;


}
int main(){
	int arr[]={2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	updatearray(arr,n);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;



}







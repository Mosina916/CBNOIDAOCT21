#include<iostream>
using namespace std;
int main(){
	

	int arr[100];
	// int arr[1000000];

	int tcs;
	cin>>tcs;//10
	

	for(int i=0;i<=tcs-1;i++){
		cin>>arr[i];
	}

	for(int i=tcs-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}













	


	return 0;
}
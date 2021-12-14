#include <iostream>
using namespace std;
int sum(int *arr,int n){
	// base case
	if(n==0){
		return 0;
	}



	// recursive case
	return arr[0]+sum(arr+1,n-1);
	
}


int sum2(int *arr,int n){
	// base case
	if(n==0){
		return 0;
	}



	// recursive case
	return arr[n-1]+sum2(arr,n-1);
	
}
int sum3(int *arr,int n,int i){
	// base case
	if(i==n){
		return 0;
	}



	// recursive case
	return arr[i]+sum3(arr,n,i+1);




}



int main(){
	int arr[]={1,2,8,7,8,4,5,1};
	int n=sizeof(arr)/sizeof(int);


	cout<<sum(arr,n)<<endl;
	cout<<sum2(arr,n)<<endl;
	cout<<sum3(arr,n,0)<<endl;

	





	return 0;

}
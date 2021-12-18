#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int i){
	// base case
	if(i==n-1){
		return;
	}



	// recursive case
	for(int j=0;j<=n-2-i;j++){ //optimised
			if(arr[j]>arr[j+1]){
				// swap

				swap(arr[j],arr[j+1]);

			}

		}

		bubblesortrec(arr,n,i+1);

}


void bubblesortrec2(int *arr,int n,int i,int j){
	// base case
	if(i==n-1){
		return;
	}
	if(j==n-1-i){
		bubblesortrec2(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
				// swap

				swap(arr[j],arr[j+1]);

			}
			bubblesortrec2(arr,n,i,j+1);


	}




}


int main(){
	// int arr[]={1,9,3,7,3,1,242,35,325,23,6};
	int arr[]={4,9,7,3,7,6};
	int n=sizeof(arr)/sizeof(int);
	// bubblesortrec(arr,n,0);





	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;


	bubblesortrec2(arr,n,0,0);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	

	return 0;
}
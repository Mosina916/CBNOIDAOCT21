#include<iostream>
using namespace std;
int main(){
	int arr[5]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	// print
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// bubble sort


	// bubble sort

	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){ //optimised
			if(arr[j]>arr[j+1]){
				// swap

				swap(arr[j],arr[j+1]);

			}

		}

	}

	for(int i=0;i<=n-2;i++){
			int flag=0;


		for(int j=0;j<=n-2-i;j++){
		if(arr[j]>arr[j+1]){
			
		// 3rd variable 
			// int temp=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=temp;
			// swap


			// // without 3rd variable
			// arr[j]=arr[j]+arr[j+1];
			// arr[j+1]=arr[j]-arr[j+1];
			// arr[j]=arr[j]-arr[j+1];


			// in one line

			// arr[j+1]=((arr[j]+arr[j+1])-(arr[j]=arr[j+1]));



	
			flag=1;
			swap(arr[j],arr[j+1]);

		}
	}
	if(flag==0){
		break;//outer loop k lye i k lye
	}

}


	cout<<"After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;








	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int arr[]={55,4,33,2,1,34,23,4,141};
	int n=sizeof(arr)/sizeof(int);

	// print
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// insertion sort

	for(int i=1;i<=n-1;i++){
		int j;
		int currele=arr[i];
		for(j=i-1;j>=0;j--){
			if(currele<arr[j]){
				arr[j+1]=arr[j];

			}
			else{
				break;
			}
		}
		arr[j+1]=currele;
	}




	cout<<"After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;








	return 0;
}
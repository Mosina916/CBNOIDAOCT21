#include<iostream>
using namespace std;
int main(){
	// int arr[]={4,3,7,8,12,9};
	// int n=sizeof(arr)/sizeof(int);

	int arr[10000];
	int n;
	cin>>n;//5
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	// print
	cout<<"Before sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	//selection sort
	for(int pos=0;pos<=n-2;pos++){
		int min=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[pos],arr[min]);
	}

	


	cout<<"After sorting"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;





	




	return 0;
}
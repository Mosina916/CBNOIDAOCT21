#include<iostream>
using namespace std;
// void mergetwosortedarrays(int *arr1,int a1n,int *arr2,int a2n){

// 	int i=0,j=0,k=0;
// 	int temp[1000000];

// // loop
// 	while(i<a1n&&j<a2n){
// 		if(arr1[i]<arr2[j]){
// 		temp[k]=arr1[i];
// 		k++;
// 		i++;
// 	}
// 	else{
// 		temp[k]=arr2[j];
// 		k++;
// 		j++;

// 	}


// 	}

// 	// agar arr1 khatam ho jati hai tou arr2 wo bachi hogi
// // loop
// 	while(j<a2n){
// 		temp[k]=arr2[j];
// 	k++;
// 	j++;

// 	}

// 	// agar arr2 khatam ho jati hai tou arr1 wo bachi hogi
// 	while(i<a1n){
// 		temp[k]=arr1[i];
// 	i++;
// 	k++;

// 	}

// 	cout<<"after merginig"<<endl;
// 	for (int l = 0; l <k;l++)
// 	{
// 		cout<<temp[l]<<" ";
// 	}
// 	cout<<endl;
	

// }
void mergetwosortedarrays(int *arr,int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int temp[10000];

	int j=mid+1;
	int k=s;

// loop
	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}

	}


	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}


	for(int i=s;i<=e;i++){
		arr[i]=temp[i];
	}

	

}


void mergesort(int *arr,int s,int e){
	if(s>=e){
		return;
	}

	int mid=(s+e)/2;
	mergesort(arr,s,mid);//1 2 4
	mergesort(arr,mid+1,e);//3 5
	mergetwosortedarrays(arr,s,e);
}
int main(){
	int arr[]={4,2,1,5,3};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<endl;
	}
	


	return 0;
}
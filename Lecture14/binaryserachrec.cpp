#include<iostream>
using namespace std;
int Binarysearch(int *arr,int si,int ei,int key){
	// ?base case
	if(si>ei){
		return -1;
	}



	// recursive case
	int mid=(si+ei)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		// elelment peeche lie kar raha hoga
		return Binarysearch(arr,si,mid-1,key);
	}
	else{
		return Binarysearch(arr,mid+1,ei,key);
	}



}

int main(){
	int arr[]={2,3,6,8,9};
	int n=sizeof(arr)/sizeof(int);



	int indx=Binarysearch(arr,0,n-1,8);
	if(indx==-1){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<indx<<endl;

	}
	

	return 0;
}
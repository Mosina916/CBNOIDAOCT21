#include<iostream>
using namespace std;
int Binarysearch(int *arr,int si,int ei,int key){

// loop
	// si<=ei
	while(si<=ei){
		int mid=(si+ei)/2;//2
	if(arr[mid]==key){
		return mid;

	}
	else if(arr[mid]>key){
		ei=mid-1;
	}
	else{
		si=mid+1;
	}

	}

	return -1;
	

}

int main(){
	int arr[]={2,3,6,8,9};
	int n=sizeof(arr)/sizeof(int);



	int indx=Binarysearch(arr,0,n-1,89);
	if(indx==-1){
		// cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<indx<<endl;

	}
	

	return 0;
}
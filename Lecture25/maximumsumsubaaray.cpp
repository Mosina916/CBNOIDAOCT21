#include<iostream>
using namespace std;
int main(){
	int arr[]={2,-3,-4,-1,2,1,5,3};
	int n=sizeof(arr)/sizeof(int);
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		int sum=0;
	for(int k=i;k<=j;k++){
		sum=sum+arr[k];//-1

	}
	if(sum>maxsum){
		maxsum=sum;//5
	}


	}
}


cout<<"maxsum is "<<maxsum<<endl;
	



	return 0
}
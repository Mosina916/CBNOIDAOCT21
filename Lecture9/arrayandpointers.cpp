#include<iostream>
using namespace std;
// update(int a[],int n){
void update(int *a,int n){
	for (int i = 0; i <n; ++i)
	{
		// a[i]=a[i]+1;
		*(a+i)=*(a+i)+1;
	}
}
int main(){

	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);



	// cout<<arr<<" "<<&arr[0]<<endl;

	// cout<<arr+1<<" "<<&arr[1]<<endl;
	// cout<<arr+2<<" "<<&arr[2]<<endl;

	for(int i=0;i<n;i++)
{
	// cout<<arr[i]<<" ";


	cout<<*(arr+i)<<endl;
}
cout<<endl;


update(arr,n);


for(int i=0;i<n;i++)
{
	// cout<<arr[i]<<" ";


	cout<<*(arr+i)<<endl;
}
cout<<endl;
	




	

	return 0;
}
#include<iostream>
using namespace std;
int main(){
	

	int arr[100];
	int i;
	// int arr[1000000];

	int tcs;
	cin>>tcs;//5

	for(int i=0;i<=tcs-1;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;

	for(i=0;i<=tcs-1;i++){
		if(arr[i]==key){
			cout<<i<<endl;
			break;
			// return 0;
		}
	}



	if(i==tcs){
		cout<<"invalid "<<endl;
	}
	







	


	return 0;
}
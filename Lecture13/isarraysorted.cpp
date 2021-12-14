#include <iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){
	// base case-->stopping condition
	if(n==1){
		return true;
	}



	// recursive case
	
	if(arr[0]<=arr[1]&&isarraysortedornot(arr+1,n-1)){
		return true;
	}
	else{
		return false;
	}
}

bool isarraysortedornot2(int *arr,int n){
	// base case-->stopping condition
	if(n==1){
		return true;
	}



	// recursive case
	
	if(arr[n-1]>=arr[n-2]&&isarraysortedornot2(arr,n-1)){
		return true;
	}
	else{
		return false;
	}
}


bool isarraysortedornot3(int *arr,int n,int i){
	// base case-->stopping condition
	if(i==n-1){
		return true;
	}



	// recursive case
	
	if(arr[i]<=arr[i+1]&&isarraysortedornot3(arr,n,i+1)){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int arr[]={1,2,8,7,8,4,5,1};
	int n=sizeof(arr)/sizeof(int);
	// if(isarraysortedornot(arr,n)){
	// 	cout<<"yes sorted"<<endl;
	// }
	// else{
	// 	cout<<"not sorted"<<endl;
	// }


	if(isarraysortedornot3(arr,n,0)){
		cout<<"yes sorted"<<endl;
	}
	else{
		cout<<"not sorted"<<endl;
	}





	return 0;

}
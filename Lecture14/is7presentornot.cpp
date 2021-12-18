#include<iostream>
using namespace std;
bool is7presentornot(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}



	// recursive case
	if(arr[0]==7){
		return true;
	}
	// if(arr[0]!=7){
	// else{
		return is7presentornot(arr+1,n-1);

	// }
	// if(is7presentornot(arr+1,n-1)==true){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
	
}
int fisrtindexof7(int *arr,int n,int i){

	// ?base case
	if(i==n){
		// uska mtlb element nahi hai
		return -5;
	}


	// recursive case
	if(arr[i]==7){
		return i;
	}
	return fisrtindexof7(arr,n,i+1);


}
int last7(int *arr,int n,int i){
	// base case
	if(i==-1){
		return -1;
	}


	// recursive case

	if(arr[i]==7){
		return i;
	}
	return last7(arr,n,i-1);
}
int flag=0;
void allindices(int *arr,int n,int i){
	// ?base case
	if(i==n){
		if(flag==0){
			cout<<-1;
			

		}
		else{
			cout<<0<<endl;

		}
		
		return;
	}

	// recursive case

	if(arr[i]==7){
		cout<<i<<" ";
		flag=1;
	}
	allindices(arr,n,i+1);

}


int main(){
	// int arr[]={1,9,3,7,3,1,242,35,325,23,6};
	int arr[]={4,9,7,3,7,6};
	int n=sizeof(arr)/sizeof(int);
	// if(is7presentornot(arr,n)){
	// 	cout<<"yes 7 is present "<<endl;
	// }
	// else{
	// 	cout<<" 7 is not present "<<endl;
	// }
	int index=fisrtindexof7(arr,n,0);
	if(index==-5){
		cout<<"7 is not present "<<endl;
	}
	else{
		cout<<"7 is present at "<<index<<endl;
	}


	int ind=last7(arr,n,n-1);
	if(ind==-1){
		cout<<"7 is not present "<<endl;

	}
	else{
		cout<<"7 is present at "<<ind<<endl;

	}

	allindices(arr,n,0);



	return 0;
}
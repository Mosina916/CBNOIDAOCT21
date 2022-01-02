#include<iostream>
using namespace std;

// int nstair(int n){
// 	// base case
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}


// 	// recursive case
// 	return nstair(n-1)+nstair(n-2)+nstair(n-3);
// }

int nstair2(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstair2(n-i,k);
	}
	return sum;


}


int main(){
	int n,k;
	cin>>n>>k;
	// nstair(n);
	cout<<nstair2(n,k)<<endl;//4 4

	

	return 0;
}
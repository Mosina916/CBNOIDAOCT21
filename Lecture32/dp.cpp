#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n==1||n==0){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}


// top down sol
int fibotd(int n,int*dp){

	// base case
	if(n==1||n==0){
		return dp[n]=n;
	}

	// clculate karne se pehle check arr mai calculated tou nahi hai

	if(dp[n]!=-1){
		return dp[n];
	}

	return dp[n]=fibotd(n-1,dp)+fibotd(n-2,dp);
}

// bottom up
int bottomup(int n){
	int*dp=new int[n+1];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];

	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[n];
}


int main(){
	int n;
	cin>>n;
	// cout<<fibo(n)<<endl;
	int *arr=new int[n+1];
	// memset(arr,-1,sizeof(*arr));

	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<"top down"<<fibotd(n,arr)<<endl;
	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"Bottom up "<<endl<<bottomup(n)<<endl;


	



	return 0;
}
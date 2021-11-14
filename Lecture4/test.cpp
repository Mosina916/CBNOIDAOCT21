#include<iostream>
using namespace std;
int main(){

	int n,startno;
	cin>>n;//5
	// int row=1;
	// while(row<=n){
	for(int row=1;row<=n;row++){
		if(row%2==0){
			// even 
		startno=0;
		}
		else{
			// odd;
			startno=1;


		}
		// ==========================
	 // 1 row 

	// int coun=1;
	// while(coun<=row){//2<=1
		for(int coun=1,j=5;coun<=row&&coun==3;coun++){
		cout<<startno<<" ";
		// coun++;
		startno=1-startno;
	}

	// ==========================

	cout<<endl;
	// row++;




	}


	



	return 0;
}
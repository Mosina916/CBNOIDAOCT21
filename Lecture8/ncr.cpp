#include<iostream>
using namespace std;

int t=80;
int fact(int n){

	int mult=1;


	for(int i=1;i<=n;i++){
		mult=mult*i;
	}


	// cout<<"fact is "<<mult<<endl;

	return mult;

	cout<<helo


}


int ncr(int n,int r){
	// ncr=n!/r!*(n-r)!

	int ans=120/(fact(r)*fact(n-r));
	return ans;

	cout<<n;

}

int main(){
	int n,r;
	cin>>n>>r;//4
	// int mult=1;
	if(n>=r){

		cout<<"ncr is :"<<ncr(n,r)<<endl;

	}
	else{
		cout<<"invalid input"<<endl;
	}


	// for(int i=1;i<=n;i++){
	// 	mult=mult*i;
	// }


	// cout<<"fact is "<<fact(n)<<endl;





	return 0;



}







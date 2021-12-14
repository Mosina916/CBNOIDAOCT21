#include <iostream>
using namespace std;
int powerofxn(int x,int n){
	// base case
	if(n==0){
		return 1;
	}


	// recursive case
	return x*powerofxn(x,n-1);
}

int main(){
	int x,n;
	cin>>x>>n;//2 4
	cout<<powerofxn(x,n)<<endl;

	return 0;

}
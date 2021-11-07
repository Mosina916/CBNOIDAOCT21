#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int i=2;

	while(i<n){
	if(n%i==0){
		cout<<"not prime"<<endl;
		return 0;

	}
	i=i+1;


	}


	



	return 0;
}
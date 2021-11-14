#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;//3
	// while(n>0){//conition
	// 	int rem=n%10;
	// 	cout<<rem;
	// 	n=n/10;//updation
	// }


	for(;n>0;n=n/10){
		int rem=n%10;
		cout<<rem;

	}


	
	return 0;
}
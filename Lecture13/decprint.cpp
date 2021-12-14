#include <iostream>
using namespace std;
void decprint(int n){
	// base case
	// if(n==0){
	// 	return;
	// }

	if(n==1){
		cout<<1<<endl;
		return;
	}



	// recursive case
	cout<<n<<endl;//5
	decprint(n-1);
}

void incprint(int n){
	// base case
	// if(n==0){
	// 	return;
	// }

	if(n==1){
		cout<<1<<endl;
		return;
	}



	// recursive case
	incprint(n-1);
	cout<<n<<endl;//5
	
}


int main(){
	int n;
	cin>>n;
	// decprint(n);


	incprint(n);

	return 0;

}
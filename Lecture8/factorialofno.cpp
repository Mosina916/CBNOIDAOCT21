#include<iostream>
using namespace std;


int fact(int n){

	int mult=1;


	for(int i=1;i<=n;i++){
		mult=mult*i;
	}


	// cout<<"fact is "<<mult<<endl;

	return mult;


}

int main(){
	int n;
	cin>>n;//4
	// int mult=1;


	// for(int i=1;i<=n;i++){
	// 	mult=mult*i;
	// }


	cout<<"fact is "<<fact(n)<<endl;





	return 0;



}







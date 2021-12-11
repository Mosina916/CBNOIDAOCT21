#include<iostream>
using namespace std;
int factofn(int n){
	// base case
	if(n==0){
		return 1;

	}


	// recursive case//pure assumption
	// int choteans=factofn(n-1);//24


	// // with the help of bove 2 steps calculate fans
	// int fans=n*choteans;
	// return fans;


	return n*factofn(n-1);


}
int main(){
	int n;
	cin>>n;//5
	cout<<"factorial of "<<n<<" is "<<factofn(n)<<endl;




	return 0;
}
#include <iostream>
using namespace std;
string s[]={"zero","one","two","three","Four","Five","Six","Seven","Eight","nine"};

void conversion(int n){//204  20 2 0
	// base case
	if(n==0){
		return;
	}



	// recursive case
	int rem=n%10;//2048%10--8  204%10-->4  20%10-->0 2%10
	cout<<s[rem]<<" ";//Eight Four zero two
	conversion(n/10);//2048/10 204/10 20/10 2/10




}

void conversion2(int n){//204  20 2 0
	// base case
	if(n==0){
		return;
	}



	// recursive case
	conversion2(n/10);
	int rem=n%10;//2048%10--8  204%10-->4  20%10-->0 2%10
	cout<<s[rem]<<" ";//Eight Four zero two
	




}
int main(){

	int n;
	cin>>n;
	conversion(n);
	cout<<endl;
	conversion2(n);
	cout<<endl;
	return 0;

}
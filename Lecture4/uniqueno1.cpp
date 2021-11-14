#include<iostream>
using namespace std;
int main(){
	int ans=0;

	int n;
	cin>>n;//always odd 5


	int cntr=1;
	int no;
	// loop34
	while(cntr<=n){
		cin>>no;//1
	ans=ans^no;//0^3-->3^1-->2^4-->6^3-->5^1-->4
	cntr=cntr+1;//6


	}
	cout<<ans<<endl;
	

	

	return 0;
}
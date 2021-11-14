#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i==4||i==5){
			continue;
		}

		cout<<i<<" ";
	}




	return 0;
}
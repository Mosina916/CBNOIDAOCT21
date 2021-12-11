#include<iostream>
using namespace std;

int main(){
	char arr[200]="1265..46487...%,$nbsd7fjhg#gudduwedsgudiyav$$${{sdhfv;654376,23t47";

// syntax'
	// datatype* nameofpointer=strtok(nameofarray,set of delimiters);
	char*ptr=strtok(arr,".%,$#{;");
	// cout<<ptr<<endl;//1265


	// ptr=strtok(arr,".%,$#{;");
	// ptr=strtok(NULL,".%,$#{;");
	// cout<<ptr<<endl;//46487

	while(ptr!='\0'){
		cout<<ptr<<endl;
		ptr=strtok(NULL,".%,$#{;j");
	


	}

	return 0;
}
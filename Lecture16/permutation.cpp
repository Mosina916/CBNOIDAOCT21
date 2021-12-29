#include<iostream>
using namespace std;
void permuattion(char *in,int i){
	// base case
	if(in[i]=='\0'){
		cout<<in<<endl;
		return;
	}


	// recursive case
	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
	permuattion(in,i+1);
	swap(in[i],in[j]);//bracktracking
	}

}
int main(){
	char inp[100];
	cin>>inp;//abc
	permuattion(inp,0);


	



	return 0;
}
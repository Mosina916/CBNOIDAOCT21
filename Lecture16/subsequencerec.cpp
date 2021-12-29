#include<iostream>
using namespace std;
int c=0;
void subsequence(char *inp,int i,char *out,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		c++;
		return;

	}


	// recursive case
	// without a
	subsequence(inp,i+1,out,j);

	// with a
	out[j]=inp[i];
	subsequence(inp,i+1,out,j+1);


}
int main(){
	char inp[100];
	cin>>inp;
	char out[100];
	subsequence(inp,0,out,0);

	cout<<"count of subsequence is : "<<c<<endl;




	return 0;
}
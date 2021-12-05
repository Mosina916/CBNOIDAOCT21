#include<iostream>
using namespace std;
// lenofstr(char arr[])
int lenofstr(char *arr){

	int i=0;
	int cou=0;
	while(arr[i]!='\0'){
		cou++;//5
	i++;

	}

	return cou;
	

}


int main(){
	int n;
	cin>>n;
	   
	char arr[100];
	cin.getline(arr,100);

	cout<<n<<endl;
	cout<<arr<<endl;



	

	return 0;
}
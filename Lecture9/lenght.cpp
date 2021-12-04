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


	char arr6[100];

	cin.getline(arr6,100);//"hello"

	cout<<"length is : "<<lenofstr(arr6)<<endl;//hello




	









	return 0;
}
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

void append(char a[],char b[]){
	int i=lenofstr(a);//a array k lye
	int j=0;//b array k lye
// loop
	while(j<=lenofstr(b)){
		a[i]=b[j];
	j++;
	i++;

	}

	cout<<"new string is : "<<a<<endl;
	

}


int main(){

	char a[100];
	char b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	append(a,b);




	

	return 0;
}
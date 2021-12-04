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
// b ko a mai copy karna hai
void copy(char a[],char b[]){
	int i=0;
	int j=0;
	while(j<=lenofstr(b)){
		a[i]=b[j];
	i++;
	j++;

	}
	// cout<<a<<endl;
	// cout<<b<<endl;
	

}


int main(){

	int n;
	char maxstr[100];
	int maxlen=0;
	cin>>n;//3
	cin.ignore();
	char arr[100];
	int cou=1;

	while(cou<=n){
		cin.getline(arr,100);//Board
	int l=lenofstr(arr);//5
	if(l>maxlen){
		maxlen=l;//8
		copy(maxstr,arr);
	}

	cou++;//4

	}


	cout<<"max str is : "<<maxstr<<endl;//elephant
	cout<<"max len is : "<<maxlen<<endl;//8


	








	return 0;
}
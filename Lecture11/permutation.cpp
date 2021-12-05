#include <iostream>
using namespace std;
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

	char arr[100];
	cin.getline(arr,100);
	char arr1[100];
	cin.getline(arr1,100);

	int freq[26]={0};

	for(int i=0;arr[i]!='\0';i++){

	int index=arr[i]-'a';
	freq[index]++;


	}

	for(int i=0;arr1[i]!='\0';i++){

	int index=arr1[i]-'a';
	freq[index]--;


	}

	int i;
	for (i = 0; i <26; ++i)
	{
		if(freq[i]!=0){
			cout<<"not permutation"<<endl;
			break;
		}
		
	}

	if(i==26){
		cout<<"permutation"<<endl;

	}









	return 0;
}
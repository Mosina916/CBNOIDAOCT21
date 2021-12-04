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

bool palindromeornot(char ar[]){//"nitain"
	int i=0;
	int j=lenofstr(ar)-1;
// loop
	while(i<j){
		if(ar[i]==ar[j]){
		i++;
		j--;

	}
	else{
		return false;
		break;
	}

	}
	return true;

	

}
int main(){


	char arr6[100];

	cin.getline(arr6,100);//"nitain"
	if(palindromeornot(arr6)){
		cout<<"yes it is palindromic"<<endl;
	}
	else{
		cout<<"No it is not palindromic"<<endl;
	}

	




	









	return 0;
}
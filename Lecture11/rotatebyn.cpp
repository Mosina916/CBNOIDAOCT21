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
	int n;
	cin>>n;
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//hello
	int m=lenofstr(arr);//5
	int t=m;

	for(int i=lenofstr(arr)-1;i>=0;i--){
		arr[i+n]=arr[i];

	}
	//helhello
	

	int q=0;
	for(int cou=1;cou<=n;cou++){
		arr[q]=arr[m];
		m++;
		q++;
	}


	arr[t]='\0';
	cout<<"arr : "<<arr<<endl;




	return 0;
}
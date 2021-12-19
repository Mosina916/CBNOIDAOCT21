#include<iostream>
using namespace std;
void mergetwosortedarrays(int *arr1,int a1n,int *arr2,int a2n){

	int i=0,j=0,k=0;
	int temp[1000000];

// loop
	while(i<a1n&&j<a2n){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		k++;
		i++;
	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;

	}


	}

	// agar arr1 khatam ho jati hai tou arr2 wo bachi hogi
// loop
	while(j<a2n){
		temp[k]=arr2[j];
	k++;
	j++;

	}

	// agar arr2 khatam ho jati hai tou arr1 wo bachi hogi
	while(i<a1n){
		temp[k]=arr1[i];
	i++;
	k++;

	}

	cout<<"after merginig"<<endl;
	for (int l = 0; l <k;l++)
	{
		cout<<temp[l]<<" ";
	}
	cout<<endl;
	

}
int main(){
	int arr1[]={1,3,7};
	int arr2[]={2,4,6,8};
	int a1n=3;
	int a2n=4;
	mergetwosortedarrays(arr1,a1n,arr2,a2n);
	


	return 0;
}
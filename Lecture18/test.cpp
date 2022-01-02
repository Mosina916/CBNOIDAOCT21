#include<iostream>
using namespace std;
bool kyamainumdaalsaktihun(int mat[9][9],int i,int j,int n,int num){

	// row

	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}


	// col
	for(int l=0;l<n;l++){
		if(mat[l][j]==num){
			return false;
		}
	}

	// root(n)*root(n)
	int p=sqrt(n);
	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3
	for(int h=si;h<si+p;h++){
		for(int u=sj;u<sj+p;u++){
			if(mat[h][u]==num){
				return false;
			}
		}

	}

	return true;


}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}




	// recursive case
	
	if(j==n){
		return sudukosolver(mat,i+1,0,n);

	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}



	
	for(int num=1;num<=9;num++){
		if(kyamainumdaalsaktihun(mat,i,j,n,num)){
		mat[i][j]=num;
		if(sudukosolver(mat,i,j+1,n)==true){
			return true;
		}
		// mat[i][j]=0;

	}

	}
	// mat[i][j]=0;
	

	return false;
	
}
int main(){
	// int mat[9][9] =
	// 	{{5,3,0,0,7,0,0,0,0},
	// 	{6,0,0,1,9,5,0,0,0},
	// 	{0,9,8,0,0,0,0,6,0},
	// 	{8,0,0,0,6,0,0,0,3},
	// 	{4,0,0,8,0,3,0,0,1},
	// 	{7,0,0,0,2,0,0,0,6},
	// 	{0,6,0,0,0,0,2,8,0},
	// 	{0,0,0,4,1,9,0,0,5},
	// 	{0,0,0,0,8,0,0,7,9}};


	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		if(sudukosolver(mat,0,0,9)){
			cout<<"solution exists"<<endl;
		}
		else{
			cout<<"solution Doesn't exist"<<endl;
		}


	return 0;
}
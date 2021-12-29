#include<iostream>
using namespace std;
int c=0;
bool kyamaiqueenplacekarsaktihun(int board[][20],int i,int j,int n){
	// for checking vertically
	
	for(int l=0;l<n;l++){
		if(board[i][l]==1){
			return false;

		}
	
	}
	// forchecking horzantally

	for(int k=0;k<n;k++){
		if(board[k][j]==1){
			return false;
		}
	}
	int u=i;
	int t=j;


	// diagonally right
	while(i>=0&&j<n){
		if(board[i][j]==1){
			return false;

		}
		i--;
		j++;
	}
	// i=0,j=5

	// diagonally left
	while(u>=0&&t>=0){
		if(board[u][t]==1){
			return false;
		}
		u--;
		t--;
	}

	return true;

}
bool nqueen(int board[][20],int n,int i){
	// base case
	if(i==n){
		c++;
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				if(board[k][l]==1){
					cout<<'Q'<<" ";

				}
				else{
					cout<<"- ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;
		return false;
	}



	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueenplacekarsaktihun(board,i,j,n)==true){
		board[i][j]=1;
		bool kyaneecheseansmila=nqueen(board,n,i+1);
		if(kyaneecheseansmila==true){
			return true;
		}
		board[i][j]=0;

	}


	}
	return false;
	

	
}
int main(){

	int board[][20]={0};
	int n;
	cin>>n;
	nqueen(board,n,0);


	cout<<c<<endl;



	return 0;
}
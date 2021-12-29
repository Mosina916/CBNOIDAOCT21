#include<iostream>
using namespace std;
int sol[100][100]={0};
bool ratinamaze(char maze[][10],int i,int j,int r,int c){
	// base case
	if(i==r-1&&j==c-1){
		sol[i][j]=1;
		for(int k=0;k<r;k++){
			for(int l=0;l<c;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;

		// return true;
		sol[i][j]=0;
		return false;
	}




	// recursive case
	sol[i][j]=1;
	// right
	if(j+1<c&&maze[i][j+1]!='X'){
		// i can move to right
		bool kyarightseansmila=ratinamaze(maze,i,j+1,r,c);
		if(kyarightseansmila==true){
			return true;
		}

	}
	// down 
	if(i+1<r&&maze[i+1][j]!='X'){
		bool kyaneecheseansmila=ratinamaze(maze,i+1,j,r,c);
		if(kyaneecheseansmila==true){
			return true;
		}
	}

	sol[i][j]=0;

	return false;







}
int main(){

	char maze[][10]={
		"OOOO",
		"OOOX",
		"OOXO",
		"OOOO"
	};

	int r=4,c=4;
	ratinamaze(maze,0,0,r,c);






	return 0;
}
#include<iostream>
using namespace std;
void update(int &guddu,int &ty){
	guddu=guddu+20;

	cout<<"guudu inside update function : "<<guddu<<endl;//11
	

}
int main(){
	int kuldeep=80;
	int ankit=90;

	// dataype &nickname=originalname;
	// int &guddu=kuldeep;

	cout<<guddu<<endl;


	cout<<"kuldeep inside main : "<<kuldeep<<endl;//10
	update(kuldeep,ankit);
	cout<<"kuldeep inside main after update : "<<kuldeep<<endl;
	


	return 0;



}







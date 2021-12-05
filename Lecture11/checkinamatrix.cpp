#include <iostream>
using namespace std;
int main(){
	
	// user input

	int arr3[1000][1000];
// input
	int row,col;
	cin>>row>>col;

	
	for(int r=0;r<row;r++){
		for(int c=0;c<col;c++){
			cin>>arr3[r][c];
		}
	}
	int key;
	cin>>key;//6
	int flag=0;



	// search
	int r,c; 
	for(r=0;r<row;r++){
	for(c=0;c<col;c++){
	if(arr3[r][c]==key){//1,1
		cout<<"key is present at : "<<r<<" , "<<c<<endl;
		flag=1;
		// r=row;
		// break;
	}
	}
	// if(c!=col){
	// 	break;
	// }
	// if(flag==1){
	// 	break;
	// }

}
if(flag==0){
	cout<<"key is not present at"<<endl;

}
	


// print
	// for(int r=0;r<row;r++){
	// 	for(int c=0;c<col;c++){
	// 		cout<<arr3[r][c]<<" ";
	// 	}
	// 	cout<<endl;
	// }


	// char arr5[][7]={
	// 	"coding",
	// 	"Dog",
	// 	"cart",
	// 	"qwerty"
	// };

	// cout<<arr5[0]<<endl;
	// cout<<arr5[1]<<endl;
	// cout<<arr5[2]<<endl;
	// cout<<arr5[3]<<endl;









	return 0;
}
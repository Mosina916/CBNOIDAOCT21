#include <iostream>
using namespace std;


// void fertocel(){

// 	 int initial=0,finalvalue=300,step=20;



// 	cout<<"Fahrenheit       celsius"<<endl;
// // loop

// 	while(fer<=finalvalue){
// 		int cel=((fer-32)*5)/9;


// 		cout<<fer<<"                  "<<cel<<endl;
// 		fer=fer+step;//320


// 	}
	
// }


void fertocel(int initial,int finalvalue,int step){

	 // int initial=0,finalvalue=300,step=20;

	cout<<"Fahrenheit       celsius"<<endl;
// loop

	while(fer<=finalvalue){
		int cel=((fer-32)*5)/9;


		cout<<fer<<"                  "<<cel<<endl;
		fer=fer+step;//320


	}
	
}
int main(){
	int initial,finalvalue,step;
	cin>>initial>>finalvalue>>step;


// 	cout<<"Fahrenheit       celsius"<<endl;
// // loop

// 	while(fer<=finalvalue){
// 		int cel=((fer-32)*5)/9;


// 		cout<<fer<<"                  "<<cel<<endl;
// 		fer=fer+step;//320


// 	}




// 	cin>>initial>>finalvalue>>step;


// 	cout<<"Fahrenheit       celsius"<<endl;
// // loop

// 	while(fer<=finalvalue){
// 		int cel=((fer-32)*5)/9;


// 		cout<<fer<<"                  "<<cel<<endl;
// 		fer=fer+step;//320


	// }
	// int fer=initial;//0
	// int cel;

	// fertocel();


	fertocel(initial,finalvalue,step);

	cin>>initial>>finalvalue>>step;


	fertocel(initial,finalvalue,step);
	






	return 0;
}
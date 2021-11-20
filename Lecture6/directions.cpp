#include<iostream>
using namespace std;
int main(){
	int x=0,y=0,counter;//i am at origin 
	char ch;
	// cin>>ch;
	ch=cin.get();


// loop
	while(ch!='\n'){
		// east
	if(ch=='E'){
		x=x+1;
	}

	// west
	else if(ch=='W'){
		x=x-1;
	}


	// north
	else if(ch=='N'){
		y=y+1;
	}

	// south
	else{
		y=y-1;
	}
	// cin>>ch;
	ch=cin.get();


	}

	cout<<"x: "<<x<<endl;
	cout<<"Y: "<<y<<endl;

	// ist quadrant
	// x-->=+ive y-->+ive
	if(x>=0&&y>=0){
		// counter=1;
		// while(counter<=x){
		// 	cout<<'E';

		// 	counter++

		// }
		for(counter=1;counter<=x;counter++){
			cout<<'E';
		}
		for(counter=1;counter<=y;counter++){
			cout<<'N';
		}

	}

	// 2nd quadrant
	// x-->=-ive y-->+ive
	else if(x<=0&&y>=0){
		for(counter=1;counter<=y;counter++){
			cout<<'N';
		}

		for(counter=1;counter<=abs(x);counter++){
			cout<<'W';
		}
		



	}


	// 3rd quadrant
	// x-->=-ive y-->-ive
	else if(x<=0&&y<=0){
			for(counter=1;counter<=abs(y);counter++){
			cout<<'S';
		}
		for(counter=1;counter<=abs(x);counter++){
			cout<<'W';
		}



	}

	// 4th quadrant
	// x-->=+ive y-->-ive
	else if(x>=0&&y<=0){
		for(counter=1;counter<=x;counter++){
			cout<<'E';
		}
		// for(counter=1;counter<=abs(y);counter++){
		// 	cout<<'S';
		// }

		for(int counter=y;counter<0;counter++){
			cout<<'S';
		}


	}
	cout<<endl;




	



	return 0;
}
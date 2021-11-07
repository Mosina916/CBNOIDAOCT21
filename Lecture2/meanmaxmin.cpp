#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cin>>n;//3
	int sum=0;
	int largest=INT_MIN;
	int smallest=INT_MAX;
	int counter=1;


	// LOOP
	while(counter<=n){//4<=3-->F

		int num;
	cin>>num;//4

	// for mean
	sum=sum+num;//6+6


	// smallest
	if(num<smallest){
		smallest=num;
	}


	if(num>largest){
		largest=num;

	}

  	counter=counter+1;





	}



	cout<<"mean "<<sum/n<<endl;
	cout<<"smallest "<<smallest<<endl;
	cout<<"largest "<<largest<<endl;
	





	return 0;
}
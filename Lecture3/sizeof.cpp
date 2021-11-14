#include<iostream>
using namespace std;
int main()
{
	// sizeof()
	// sizeof(datatype)

	// cout<<"bytes taken by int "<<sizeof(int)<<endl;//4
	// cout<<"bytes taken by float "<<sizeof(float)<<endl;//4
	// cout<<"bytes taken by char "<<sizeof(char)<<endl;//1
	// cout<<"bytes taken by double "<<sizeof(double)<<endl;//8


	int x=40;
	float r=6.87;
	char ch='T';

	// name of bucket 
	// cout<<"bytes taken by int "<<sizeof(x)<<endl;//4
	// cout<<"bytes taken by float "<<sizeof(r)<<endl;//4
	// cout<<"bytes taken by char "<<sizeof(ch)<<endl;//1



		// name of bucket 
	cout<<"bytes taken by int "<<sizeof(7645)<<endl;//4
	cout<<"bytes taken by float "<<sizeof(64.89)<<endl;//4
	cout<<"bytes taken by char "<<sizeof('s')<<endl;//1

	cout<<"bytes taken by double "<<sizeof(64324656732546.8976543672)<<endl;//4
	






	return 0;
}
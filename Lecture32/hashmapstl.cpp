#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;
int main()
{
	// unordered_map<string,int> h;
	map<string,int> h;
	h["Mango"]=100;
	h["Banana"]=5;
	h["Kiwi"]=130;
	h["papaya"]=10;

	for(auto ne:h){
		cout<<ne.first<<" "<<ne.second<<endl;
	}

	// pair<string,int>p;
	// p.first=1;
	// p.second=10;
	// cout<<
	pair<string,int>p;
	for(int i=0;i<5;i++){
		cin>>p.first>>p.second;
		h.insert(p);



	}



	


	return 0;
}
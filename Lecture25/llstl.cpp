#include<iostream>
#include<list>
using namespace std;
int main(){
	// list<datatype>nameoflist;
	list<int>l;
	l.push_back(6);
	l.push_back(16);
	l.push_front(70);
	l.push_front(80);
	cout<<l.front()<<endl;//80
	cout<<l.back()<<endl;//16


	list<int>:: iterator it=l.begin();
	// list<int>::iterator it = list1.begin();
	advance(it,2);
	l.insert(it,5);
	// it=l.begin();
	// it=it+2;
	// l.insert(it,3);
	cout<<"size of ll is "<<l.size()<<endl;
	
	for(it=l.begin();it!=l.end();it++){
		cout<<*it<<" ";

	}
	



	return 0;
}
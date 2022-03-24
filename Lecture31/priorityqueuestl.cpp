#include<iostream>
#include<queue>
using namespace std;
int main()
{
	// priority_queue<int> h;//max heap
	priority_queue<int,vector<int>,greater<int> > h;
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(11);
	h.push(0);
	h.push(6);
	h.push(16);
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;



	return 0;
}
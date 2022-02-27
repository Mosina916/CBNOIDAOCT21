#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>q; //7 9 8 18 19
	q.push(7);
	q.push(9);
	q.push(8);
	q.push(18);
	q.push(19);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	

	}
	

	return 0;
}
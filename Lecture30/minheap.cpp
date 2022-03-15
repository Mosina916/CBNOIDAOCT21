#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Minheap{
	vector<int> v;

public:
	
	Minheap(){
		v.push_back(-1);
	}

	void heapify(int indx){
		int minindex=indx;//1
		int left=2*indx;//2
		int right=left+1;//3

		if(left<v.size()&&v[minindex]>v[left]){//v[1]>v[2]
			minindex=left;//2

		}

		if(right<v.size()&&v[minindex]>v[right]){
			minindex=right;//2

		}

		if(minindex!=indx){
			swap(v[minindex],v[indx]);
		heapify(minindex);

		}
		
	}

	// insertion

	void insert(int d){
		v.push_back(d);
		int child=v.size()-1;//10
		int parent=child/2;//5
		while(child>1&&v[child]<v[parent]){
			swap(v[child],v[parent]);
			child=parent;
			parent=child/2;

		}


	}


	// deletion

	void deletion(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);

	}


// top
	int top(){
		return v[1];
	}


	bool empty(){
		return v.size()==1;
	}
	// search
	// search(){

	// }

};
int main(){
	Minheap h;
	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);

	h.insert(0);
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.deletion();

	}

cout<<endl;
	


	return 0;
}
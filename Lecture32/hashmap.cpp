#include<iostream>
using namespace std;
class node{
public:
	int val;
	string key;
	node*next;
	node(string k,int v){
		val=v;
		key=k;
		next=NULL;
	}
};
class Hashmap{
	node**arr;
	int cs;
	int ts;
public:

	Hashmap(int size=7){
		cs=0;
		ts=size;
		arr=new node*[size];
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}

	}

// hashfunction
	int hashfunction(string s){
		int ans=0;
		int mul=1;
		for(int i=0;i<s.length();i++){
			// ans+=(s[i]*mul)%ts;
			ans+=(s[i]%ts*mul%ts)%ts;
			mul=(mul*23)%ts;

		}
		return ans%ts;


	}
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}
		// copy elements oldarr arr
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];
			while(head){
				insert(head->key,head->val);
				head=head->next;

			}

		}

		delete[]oldarr;
	}
	// insert
	void insert(string s,int k){
		int indx=hashfunction(s);//4
		node*n=new node(s,k);
		n->next=arr[indx];
		arr[indx]=n;
		cs++;
		if(cs/(ts*1.0)>0.6){
			rehashing();
		}

	}
	// // print 
	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*head=arr[i];
			while(head!=NULL){
				cout<<"("<<head->key<<","<<head->val<<"),";
				head=head->next;
			}
			cout<<endl;


		}

	}

	node* search(string s){
		int indx=hashfunction(s);
		node*head=arr[indx];
		while(head!=NULL){
			if(head->key==s){
				return head;

			}
			head=head->next;
		}

		return NULL;
	}
};

int main()
{
	Hashmap h;
	h.insert("mango",100);
	h.insert("Banana",5);
	h.insert("kiwi",130);
	h.insert("papaya",10);
	// h.insert("apple",10000);

	h.print();

	cout<<h["kiwi"]<<endl;
	h["kiwi"]=190;


	// h.search("mango");




	


	return 0;
}
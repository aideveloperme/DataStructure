#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int>l;

	list<int> l1{1,2,3,4,45};

	//diferent datatype
	list<string> l2{"apple","guava","mango","banan"};
	l2.push_back("pineapple");

	//sort
	l2.sort();

	l2.reverse();
	//remove
	
	cout<<l2.front()<<endl;
	l2.pop_front();

	//add to the front of the list
	l2.push_front("kiwi");
	cout<<l2.back();
	l2.pop_back();


	//iterate over the list and print data 
	for(auto it=l2.begin();it!=l2.end();it++){
		cout<<(*it)<<"-->";
	}

	


	//iterate 
	for(auto s:l2){
		cout<<s<<"-->";
	}
	
	l2.push_back("orang");
	
	//erase one or more elements 
	auto it=l2.begin();
	it++;
	it++;
	l2.erase(it);

}
//in linkedlist , 
//list is like doubly linkedlist , use list stl , comes to insert and delete data from the middle , in vector if want to insert in middle shift all elements one position after words , but in double linkedlist just link ..
//push_back
//push_front
//pop_back
//pop_front
//insert
//erase (idx)
//remove (2) 

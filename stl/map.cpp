#include<iostream>
#include<map>
#include<string>
//bcz key is the string so include string 
using namespace std;
int main(){
	map<string,int> m;

	//key string and value int
	////insert fun 
	m.insert(make_pair("mango",100));

	pair<string,int> p;

	//ways to insert
	p.first ="apple";
	p.second = 120;

	m.insert(p);

	m["banana"]=20;


	//search 
	string fruit;
	cin>>fruit;

	auto it= m.find(fruit);
	if(it!=m.end()){
		cout<<"price of "<<fruit<<"is "<<m[fruit]<<endl;
	}

	else{
		cout<<"fruit is not present"<<endl;
	}

	//erase 
	m.erase(fruit);

	//anotheer way to find a particular map 
	//it stores unique key s only once 
	
	if(m.count(fruit)){
		cout<<"price"<<m[fruit]<<endl;
	}
	else
	{
		cout<<"couldnt find the fruit";
	}
	//find fun returns iterator 
	//count fun returns integer 
	

	return 0;
}
//
//key  and value
//maggi 20kg
//juice 25
//pepsi 35
//key --- value 
// insert (k, v) pair ,
// query(k) ; queury size of the key 
// delete (k) delete parat
//
//key are ordered in map
//keys are not ordered in  unnorderd map//

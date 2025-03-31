#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> d{1,2,3,1,10};
	
	//PUSH back o(1) for most of the time
	
	d.push_back(16);
	
	d.pop_back(16);

	//insert some elements in the middle 
	d.insert(v.begin+ 3,4,100); //insert 100 at 3 to 4 th position O(n) time

	d.erase(d.begin()+2);
	d.erase(d.begin()+2,d.begin()+5);

	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	d.resize(8);
	cout<<d.capacity()<<endl;

	//this doesnot delete the memory occupied by array 
	d.clear();

	if(d.empty()){
		cout<<"empty vector";
	}
	cout<<d.size()<<endl;


	for(int x:d){
	
		        cout<<x<<",";
	}
	cout<<v.size()<<endl;
        cout<<v.capacity<<endl;
        cout<<v.max_size()<<end;
	

	d.push_back(10);
	d.push_back(11);
	d.push_back(243);

	cout<<d.front()<<endl;
	cout<<d.back()<<endl;

}

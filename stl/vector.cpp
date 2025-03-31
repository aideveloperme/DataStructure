//vector is a dynamic array that can grow and shrink in size 1, 2, 3,4,5
//
#include<iostream>
#include<vector>

using namespace std;
int main(){

	vector<int> a;
	vector<int> b(5,10); //five int with value 10-int a vectir of zeros(n,0)
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,4,5};



	//iterate over the vector
	for(int i=0;i<c.size();i++){
		cout<<c[i]<<",";
	}
	cout<<endl;

	for(auto it=b.begin();it!=b.end();it++){

		cout<<(*it)<<",";
	}
		//there is a class vector inside that have iterator defined , create iterator of the particular type vector<int> ::iterator , replace auto if u want use iterator 
	
	//for each loop 
	for(int x:d){
		cout<<x<<",";
	}

	cout<<endl;

	//discus more functions 
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no);
	}

	for(int x:v){
		cout<<x<<",";
	}

	//understand at memory level what are the difference in the two 
	cout<<v.size()<<endl;
	cout<<v.capacity<<endl;
	cout<<v.max_size()<<endl;

	cout<<d.size()<<endl;
        cout<<d.capacity<<endl;
        cout<<d.max_size()<<endl;
	return 0;

}


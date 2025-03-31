#include<iostream>
#include<cstring>
using namespace std;


	class fun{
		public:
			void operator()(string s){
				cout<<"having fun with "<<s;
			}
	};
	class person{
		public:
			string name;
			int age;
			person(){
			}

			person(string n, int a){
				name=n;
				age=a;
			}
	};

	class personcompare{
		public:
			bool operator()(person a, person b){
				return a.age<b.age;
			}

	int main(){

		int n;
		cin>>n;
		priority_queue<person,vector<person>,personcompare> pq;
		for(int i=0;i<n;i++){
			string name;
			int age;
			cin>>name>>age;
			person p(name,age);


		return 0;

}

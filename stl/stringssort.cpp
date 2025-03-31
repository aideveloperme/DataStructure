#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	cin.get();
	
	bool compare(string a,string b){
	return a.lenght()<b.length();
	}

	string s[100];

	//sort function- comparision based on lexi graphical sort
	

	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}

	sort(s,s+n);
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
}


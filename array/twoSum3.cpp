//suing hash map 
#include<bits/stdc++.h>
using namespace std;

string twoSum(int n,vector<int> &arr, int target){
	unordered_map<int,int> mpp;

	for(int i=0;i<n;i++){
		int num = arr[i];
		int moreNeeded = target - num;
		if(mpp.find(moreNeeded)!= mpp.end()){
			return "YES";
		}
		mpp[num] = i;
	}return "NO";
}
int main(){
	int n = 5;
	vector<int> arr ={2,6,5,11};
	int target =14;
	string ans = twoSum(n,arr,target);
	cout<<"this is the number for variant 1:"<<ans<<endl;
	return 0;
}

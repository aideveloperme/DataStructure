#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(int n, vector<int> &arr, int target ){
	unordered_map<int,int>mpp;
	for(int i=0;i<n;i++){
		int num = arr[i];
		int moreNeeded = target-num;
		if(mpp.find(moreNeeded)!=mpp.end()){
			return {mpp[moreNeeded],i};
		}
		mpp[num] = i;
	}
	return {-1,-1};
}
int main(){
	int n=6;
	vector<int> arr = {2,4,6,2,1,8};
	int target = 3;
	vector<int> ans = twoSum(n,arr,target);
	cout<<"this is the answer for variant 2 solution:["<<ans[0]<<","<<ans[1]<<endl;
	return 0;
}

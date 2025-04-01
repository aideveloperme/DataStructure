#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
	for(int i = 1; i<n; i++){
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
}
int main(){
	int arr[] = {1,2,4,5,3,8,9},n=7;
	cout<<isSorted(arr,n)?"Ture":"False";
}

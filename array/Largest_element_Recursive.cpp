#include<bits/stdc++.h>

using namespace std;

int FindLargestElement(int arr[],int n){
	int max = arr[0];
	for(int i = 0; i < n; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr1[] = {2,3,5,1,6,7};

	int n = 6;

	int max = FindLargestElement(arr1,n);

	cout<<" The largest element in the array is "<<max<<endl;

	return 0;
}
//Time Complexity: O(N)

//Space Complexity: O(1)

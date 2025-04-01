#include<bits/stdc++.h>
using namespace std;

int GetElements(int arr[],int n){
	if(n == 0 || n == 1){
		cout<<-1<<" "<<-1<<endl;
	}
	int small = INT_MAX, second_small = INT_MAX;
	int large = INT_MIN, second_large = INT_MIN;
	int i;
	for(i =0;i<n;i++)
	{
		small = min(small,arr[i]);
		large = max(large,arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]<second_small && arr[i]!=small)
			second_small = arr[i];
		if(arr[i]>second_large && arr[i]!=large)
			second_large = arr[i];
	}
	cout<<"second smallest is "<<second_small<<endl;
	cout<<"second largest is"<<second_large<<endl;
}
int main(){
	int arr[]={2,4,65,6,1,9,2,3};
	int n =sizeof(arr)/sizeof(arr[0]);
	GetElements(arr,n);
	return 0;
}

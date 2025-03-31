//Count digits in a number 
#include<iostream>
using namespace std;
int countDigits(int x){
	int res=0;
	while(x>0){
		x=x/10;
		res++;
	}
	return res;
}
int main(){
	int number=789;
	cout<<countDigits(number);
	cout<<res;
	return 0;
}

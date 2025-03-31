#include <iostream>
using namespace std;
int main()
{
	int count =0 ;
	int n;
	cout<<"enter the number to count the digits in it ";
	cin >> n;

	while(n>0)
	{
		n=n/10;
		count++;
	}
	cout<<"number of digits in number is "<<count;
	return 0;
}


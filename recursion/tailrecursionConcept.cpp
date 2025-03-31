//before going to tail recursion 
//void fun(int n){
//if(n==0)
//	return;
//print(n)
//func(n-1)
//}
//  here print from n to 1 using recursion 
//  this function will takes less time than modern compiler
//
//  void func(int n)
//  {if(n==0)
//  	return;
//  func(n-1);
//  print(n);
//  }
//print from 1 to n 
//
//  why n to 1 takes most time than 1 to n 
//  a function is called tail recursive when the last thing that happens in the function is recursive call
// its not tail recursive 2nd ex...when the caller has more to do after the child call it is not tail recursive 
//
// why it is faster : caller doesnot have to save the state :
//take less time if tail recursion 
//
//
//convert into tail recursive 2nd ex
//;'can not convert all the  prgm into tail recursion by adding some parameter 
//k=1;
//void fun(int n, int k)
//if (n==0(
//retur;
//print(k)
//for (n-1,k+1)
//
//
//factorial 
//int fact(int n)
//if (n==0||n==1)
//return 1;
//return n*fac(n-1);---no tail recursion 
//
//int fact(int n,int k)
//if(n==0||n==1)
//retrun k;
//return n*fact(n-1)
//
//
//writing base cases in recursion 
//
//factorial 
//n=4
//output=24
//
// int fib(int n)
// {
// return fib(n-1)+fib(n-2)
// if(n==0||n==1))// base case to handle zero , and handle 1 ;
// input
//
//
// natural num sum using recursion
// int getsum(int n)
// if (n==0)
// return 
// return n+getsum(n-1)
// }
// int main
// int n=4
// cout<<getsum(n)
// return 0;
//
// teta n
//
//
//
// ---PALINDROME CHECK USING RECURSION
// input- abbcbba 
// output :yes 
//
// abba 
// reverse of the string same as the original string 
// geeks --not palindrome
//
//
// void palindrome 
// first and last character should be same
// then we can solve recursively 
// bas`e cases:
// n=0 OR n=1 return true:
//
//
#inlcude <iostream>
using namespace std;
bool ispalindrome(string str, int start, int end){
	if(start>=end)
		return true;
	return ((str[start]=str[end]))&& ispalindrome(str,start+1,end-1))

}
int main(){
	string s="megha";
	print("%s",ispalindrome(s,0,s.length() -1)? "true":"false")
		return 0;


	//sum of digits
	//input =253
	//output =10
	//
	//reminder 3 ,if 253%10==0,re
	//
	//get(253)
	// get(25)+3
	//    get(2)+5
	//      get(0)+5
	//
	// int get(int n)
	// if (n==0)
	// 	return 0;
	// 	else 
	// 	return get(n/10)+n%10;
	// }
	// time -0d
	// oxilar space :teta d'
	// extra overhead for recursive call and extra space so iteratuive sol better
	//interative sol
	//int getsume(int n)
	//int res=0;
	//while(n>=0)
	//	re =res+n%10;
	//	n=n/10;
	//}
	//return res;
	//}
	//less oxilary space teta (1)
	//time =d
	//
	//
ROPE OF LENGH
N=5 , a=2,b=5 ,c=1
lenght of rope 5 , and piece 2,5,1
3 pieces 

	//
	//
	//
	//
	//
	//
	//
	//
	//

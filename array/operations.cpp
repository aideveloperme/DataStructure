// if found return 1 else -1--this is linear search  
// int search(int arr[],int n, int x)
// {
// for i to n
// if arr[i]==x;
// return i;
// }
// return -1 

//Instert operation in array
//we cannot insert if fixed size array, only insert if we have space extra .
//int insert(int arr[],int n,int x, int capacity, int position){
//{
//if (n==cap)
//return n ;
//int index=position-1; //declared as position -1,if position is 2 index is 1 , we move all the elements one position ahead , after insert at position.
//for (int i=n-1;i>=index;i--)
//arr[i+1)=arr[i];
//arr[index]=x;
//return (n+1);
//}
//move all the elements forword and in the index inserting elemnt s 
time complexity of inserting in end $ any posi=o(n): at begining =o(1)


						     //delete array operation
//size and capacity of array 
//solutions: 
//int delete(int arr[],int n,int x)
//{
//int i;
//for(i=0;i<n;i++)
//if arr[i]==x;
//break;
//if(i==n)
//return n;
//for (i=i;i<n-1;j++
//arr[j]=arr[j+];
//return (n-1);
//}
//
largest elemnt in an array 

int largest(int arr[],int n)
	for int i=0;i<n;i++
		bool flag=true;
		for(int j=0;j<n;j++)
			if (arr[j]>arr[i])
				flag= false;
				break;
		if(flag==true)
		return i;
	return -1 ; //if not nfind 
}
int main(){
	int arr[]={5,8,20,10};
	cout<<getlargest(arr,4);
	return 0;
}
time complexty is o(n) ;
one traversal 
		

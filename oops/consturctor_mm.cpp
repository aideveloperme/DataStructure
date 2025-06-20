//example of classical memory management in c++
#include<iostream>
using namespace std;

class Resource {
	public:
		Resource(){
			cout<<"resource acquired "<<endl;
		}
		~Resource(){
			cout<<" resource released "<<endl;
		}
};
int main(){
	Resource* res = new Resource();
	//forgeting to call delete here will cause a memory leak
//	delete res;
	return 0;
}


//constructors and destructors were responsible for manually
//managing memory, which often led to resource leaks or dangling pointers if the developer wasn't
//careful. Dynamic memory was managed with new and delete, and there was no built-in
//mechanism to avoid memory leaks.


#include<iostream>
#include<memory> //for smart pointers

class Resource{
	public:
		Resource(){
			cout<<"resource acquired"<<endl;
		}
		~Resource(){
			cout<<"Resource released"<<endl;
		}
};
int main(){
	unique_ptr<Resource> res = make_unique<Resource>();
	return 0;
	//No need to delete manually delete the resource ;smart pointer handles it 
}
//The smart pointer ensures that the resource is properly released when it goes out of scope,
//avoiding manual memory management and potential memory leaks

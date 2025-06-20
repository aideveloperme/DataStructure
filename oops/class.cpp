#include<iostream>
#include<string>
using namespace std;
class Car{
	public:
		//data memebers
		string brand;
		string model;

		int year;

		//member function
		void displayCarInfo(){
			cout<<"car Info"<<brand<<model<<", "<<year<<endl;
		}
};
int main(){
	Car myCar;
	myCar.brand = "Toyota";
	myCar.model ="Corolla";
	myCar.year =2025;

	myCar.displayCarInfo();

	return 0;
}




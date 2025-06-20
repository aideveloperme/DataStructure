//the details of how coffee is made are hidden from the user of the coffeemachine class. the user only needs to call the makecoffee method without worrying about how the coffee is actualy made 
#include<iostream>
using namespace std;

class CoffeeMachine{
	public:
		void makeCoffee(){
			boilWater();
			brew();
			pour();
			cout<<"Coffee is Ready !"<<endl;
		}
	private:
		void boilWater(){
			cout<<"Boiling water ..."<<endl;
		}
		void brew(){
			cout<<"Brewing Coffee ..."<<endl;
		}
		void pour(){
			cout<<"Poring coffee into cup ..."<<endl;
		}
};
int main(){
	CoffeeMachine machine;
	machine.makeCoffee();
	return 0;
}

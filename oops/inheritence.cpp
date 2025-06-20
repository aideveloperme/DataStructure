//class dog inherits from the animal class, the dog class can now the eat method from animal in addition to its own bark() method
#include<iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"eatng .."<<endl;
		}
};
class Dog:public Animal{
	public:
		void bark(){
			cout<<"barking.."<<endl;
		}
};
int main(){
	Dog myDog;
	myDog.eat();
	myDog.bark();
	return 0;
}


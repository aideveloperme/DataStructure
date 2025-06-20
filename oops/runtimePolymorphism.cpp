// function sound() behaves differently depending on whether its is called vy dog or cat object. this is runtime polymorphism in c+
#include<iostream>
using namespace std;

class Animal{
	public:
		virtual void sound(){
			cout<<"Animal sound"<<endl;
		}
};
class Dog:public Animal{
	public:
		void sound() override{
			cout<<"barking"<<endl;
		}
};
class Cat: public Animal{
	public:
		void sound() override{
			cout<<" Meowing ..."<<endl;
		}
};
int main(){
	Animal* animalptr; //pointer to base class
	Dog dog; //create dog object 
	Cat cat;  //create cat object

	//Polymorphism :using base class pointer to call derived class method 
	animalptr = &dog; // point to Dog object 
	animalptr->sound();

	animalptr = &cat;
	animalptr->sound(); 
	return 0;
}

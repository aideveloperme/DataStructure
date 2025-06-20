#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
		float gpa;
	public:
		Student(string n,int a, float g) : name(n), age(a),gpa(g){} //parametirized consturctor

		void display(){
			cout<<"Name "<<name<<"age "<<age<<"GPA "<<gpa<<endl;
		}
};
int main(){
	Student student("John",20,6.9);
	student.display();
	return 0;
}

//the Student class encapsulates the student's information and provides
//controlled access to it via the displayInfo() method. The internal details of name, age, and
//gpa are hidden from external access, ensuring data integrity

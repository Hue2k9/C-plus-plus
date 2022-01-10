#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		string name;
		int age;
		double math,physics,chemischy;
	public:
		//Constructor
		Student(string name, int age, double math, double physics, double chemischy){
			this->name=name;
			this->age=age;
			this->math=math;
			this->physics=physics;
			this->chemischy=chemischy;
		}
		
		//Default constructor
		Student(){
		    	name="Hoang Minh Hue";
		    	age=19;
		    	math=10;
		    	physics=9.5;
		    	chemischy=9;
		}
		void display(){
			cout<<"\nName: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Math: "<<math<<endl;
			cout<<"Physics: "<<physics<<endl;
			cout<<"Chemischy: "<<chemischy<<endl;
		}
};
int main(){
	Student s1("Hoang Minh Hue",19,10,9.5,9), s2;
	s1.display();
    s2.display();
	return 0;
}

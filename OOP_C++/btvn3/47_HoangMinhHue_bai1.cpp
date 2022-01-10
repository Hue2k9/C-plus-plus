#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		int id,age;
	    static int salary;
	    char name[50];
	public:
		void input();
		void output();
};
int Employee::salary = 2000;
void Employee::input(){
	cout<<"Enter id: ";
	cin>>id;
	cout<<"Name: ";
	fflush(stdin);
	fgets(name,sizeof(name),stdin);
	cout<<"Age: ";
	cin>>age;
}
void Employee::output(){
	cout<<"\nId: "<<id;
	cout<<"\nName: "<<name;
	cout<<"Age: "<<age;
	cout<<"\nSalary: "<<salary;
}
int main(){
	Employee *e;
	e=new Employee[2];
	for(int i=0; i<2; i++){
		cout<<"Nhap thong tin nhan vien thu "<<i+1<<endl;
		e[i].input();
		cout<<endl;
	}
	for(int i=0; i<2; i++){
		cout<<"===Thong tin nhan vien thu "<<i+1<<"===";
		e[i].output();
		cout<<endl<<endl;
	}
	delete [] e;
	return 0;
}

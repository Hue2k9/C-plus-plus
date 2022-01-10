#include<iostream>
using namespace std;
class circle{
	public:
		double r;
		double getPerimeter(){
			return 2*3.14*r;
		};
		double getArea(){
			return 3.14*r*r;	
		};
};

int main(){
	circle h;
	cout<<"Enter r: "; cin>>h.r;
	cout<<"Perimeter is: "<<h.getPerimeter();
	cout<<"\nArea is: "<<h.getArea();
	return 0;
}

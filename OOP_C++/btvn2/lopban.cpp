#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	public:
		void nhap(){
			cout<<"Enter a,b: ";
			cin>>a>>b;
		}
	friend class B;
};
class B{
	public:
		void tinh(A dt){
			cout<<"Dien tich: ";
			cout<<dt.a * dt.b;
		}
};
int main(){
	A d1;
	B d2;
	d1.nhap();
	d2.tinh(d1);
	return 0;
}

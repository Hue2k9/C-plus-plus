#include <iostream>
using namespace std;
int main(){
	int a;
	do{
		cout<<"Nhap so dien a: ";
	    cin>>a;
	} while (a<0);
	if (a<50)
	   cout<<"Tien dien la: "<< a*1500 <<" VND";
	else if (a<100)
	   cout<<"Tien dien la: "<< a*2500 <<" VND";
	else if (a<200)
	   cout<<"Tien dien la: "<< a*4000 <<" VND";
	else if (a>=200)
	   cout<<"Tien dien la: "<< a*5000 <<" VND";
	return 0;
}

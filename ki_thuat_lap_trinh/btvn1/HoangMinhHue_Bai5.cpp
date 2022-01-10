#include <iostream>
using namespace std;
int main(){
	int n,m,a;
	cout<<"Nhap n= "; cin>>n;
	cout<<"Nhap m= "; cin>>m;
	cout<<"Nhap a= "; cin>>a;
	if ((n*m) % (a*a) ==0){
	cout<<"So vien gach can mua la: "<<(n*m)/(a*a);
}
    else{
    	cout<<"So vien gach can mua la: "<< ((n*m)/(a*a))+1;
	}
	return 0;
}

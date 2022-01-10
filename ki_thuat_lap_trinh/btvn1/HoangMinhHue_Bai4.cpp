#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao 1 so: ";
	cin>>n;
	if (n>=1 && n<=12){
		cout<<"Day la thang "<< n <<" trong nam";
	}
	else
	    cout<<"Day khong phai la 1 thang trong nam";
}

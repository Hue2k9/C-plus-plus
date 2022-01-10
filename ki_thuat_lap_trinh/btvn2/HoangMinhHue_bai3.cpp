#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	for (int i=1; i<=n; i++){
		if ( i % 2 !=0){
			cout<<"Hoang xin loi em "<<i<<" lan \n";
		}
		else{
			cout<<"Anh khong the bien mua ha thanh dong ";
			cout<<",nen cung khong the khien em ve ben anh.";
			cout<<"Xin loi em that nhieu, Sorry baby! \n";
		}
	}
	return 0;
}

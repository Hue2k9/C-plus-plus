#include<iostream>
#include<string>
using namespace std;
class canBo{
	public:
	   int maCanBo,soNgayLamViec;
	   char ngaySinh[11],hoTen[50];
	 void nhap(){
	 	cout<<"\n===== Nhap thong tin can bo ===== "<<endl;
		cout<<"Nhap ma can bo: "; cin>>maCanBo;
		fflush(stdin);
		cout<<"Ho ten: "; 
		fgets(hoTen, sizeof(hoTen), stdin);
		cout<<"Ngay sinh: "; 
		fgets(ngaySinh, sizeof(ngaySinh), stdin);
		fflush(stdin);
		cout<<"So ngay lam viec: "; cin>>soNgayLamViec;
	}
	
	 int tinhluong(){
		return soNgayLamViec*250000;
	}
	
	void xuat(){
		cout<<"\n===== Thong tin can bo =====";
		cout<<"\nMa can bo: "<<maCanBo;
		cout<<"\nHo ten: "<<hoTen;
		cout<<"Ngay sinh: "<<ngaySinh;
		cout<<"So ngay lam viec trong thang: "<<soNgayLamViec<<" ngay"<<endl;
		cout<<"Luong: "<<tinhluong()<<" dong";
	}
};
int main(){
	canBo a;
	a.nhap();
	a.xuat();
	return 0;
}

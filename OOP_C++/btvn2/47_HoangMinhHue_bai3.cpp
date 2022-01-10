#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Hang{
	private:
		char maHang[50],tenHang[50],ngayNhap[50],NSX[50];
		int donGia,soLuong;
	public:
		Hang(const char maHang[50], const char tenHang[50], const char ngayNhap[50], const char NSX[50], int donGia, int soLuong){
			strcpy(this->maHang,maHang);
			strcpy(this->tenHang,tenHang);
			strcpy(this->ngayNhap,ngayNhap);
			strcpy(this->NSX,NSX);
			this->donGia=donGia;
			this->soLuong=soLuong;
		}
		Hang(){
			strcpy(this->maHang,"");
			strcpy(this->tenHang,"");
			strcpy(this->ngayNhap,"");
			strcpy(this->NSX,"");
			donGia=0;
			soLuong=0;
		}
		void Nhap();
		void Xuat();
		~Hang(){
		   cout<<"\nHAM HUY DUOC GOI";	
		}
};
void Hang::Nhap(){
	cout<<"\n\nNhap ma hang: ";
	gets(maHang);
	cout<<"Ten hang: ";
	fgets(tenHang,sizeof(tenHang),stdin);
	cout<<"Ngay nhap: ";
	gets(ngayNhap);
	cout<<"Ngay san xuat: ";
	fflush(stdin);
	gets(NSX);
	cout<<"Don gia: ";
	cin>>donGia;
	cout<<"So luong: ";
	cin>>soLuong;
}
void Hang::Xuat(){
	cout<<"\n===Thong tin don hang===\n";
	cout<<"\nMa hang: "<<maHang;
	cout<<"\nTen hang: "<<tenHang;
	cout<<"Ngay nhap: "<<ngayNhap;
	cout<<"\nNSX: "<<NSX;
	cout<<"\nDon gia: "<<donGia;
	cout<<"\nSo luong: "<<soLuong;
	cout<<"\nThanh tien: "<<donGia*soLuong<<" dong";
}
int main(){
	Hang h1("abc","mi tom","1/1/2021","31/11/2020",3000,100),h2;
	h1.Xuat();
	h2.Nhap();
	h2.Xuat();
	return 0;
}

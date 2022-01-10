#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
   -NhanVien:
     +nhan vien kiem ke
     +chucVu
   -Phong:
     +tenPhong
     +maPhong
    -TaiSan
     +tenTaiSan
     +soLuong
     +tinhTrang
   - Phieu
     +maPhieu
     +ngayKiemKe
*/
class NhanVien{
	private:
		char tenNhanVien[50],chucVu[50];
	public:
		void nhap(){
			cout<<"Nhap ten nhan vien kiem ke: ";
			fflush(stdin);
			cin.getline(tenNhanVien,50);
			cout<<"Chuc vu: ";
			fflush(stdin);
			cin.getline(chucVu,50);
		}
		void xuat(){
			cout<<"Nhan vien kiem ke: "<<tenNhanVien<<left<<setw(30)<<"";
			cout<<"Chuc vu: "<<chucVu<<endl;
		}
	friend class Phieu;
};
class Phong{
	private:
		char tenPhong[50],maPhong[10],truongPhong[50];
	public:
		void nhap(){
			cout<<"Kiem ke tai phong: ";
			fflush(stdin);
			cin.getline(tenPhong,50);
			cout<<"Ma phong: ";
			fflush(stdin);
			gets(maPhong);
			cout<<"Truong phong: ";
			fflush(stdin);
			cin.getline(truongPhong,50);
		}
		void xuat(){
			cout<<"Kiem ke tai phong: "<<tenPhong<<left<<setw(30)<<""<<"Ma phong: "<<maPhong<<endl;
			cout<<"Truong phong: "<<truongPhong<<endl<<endl;
		}
	friend class Phieu;		
};
class TaiSan{
	private:
		char tenTaiSan[50],tinhTrang[10];
		int soLuong,tong;
	public:
		void nhap(int &tong){
			this->tong=tong;
			cout<<"Nhap ten tai san: ";
			fflush(stdin);
			cin.getline(tenTaiSan,50);
			cout<<"Nhap so luong: ";
			cin>>soLuong;
			cout<<"Tinh trang: ";
			fflush(stdin);
			cin.getline(tinhTrang,50);
			tong+=soLuong;
		}
		void xuat(){
			cout<<left<<setw(20)<<tenTaiSan<<setw(20)<<soLuong<<setw(20)<<tinhTrang<<endl;
		}
	friend class Phieu;
};
class Phieu{
	private:
		char maPhieu[10],ngayKiemKe[11];
		NhanVien nhanvien;
		Phong phong;
		TaiSan *taisan;
		int tong,n;
	public:
		void nhap(){
			tong=0;
			cout<<"Nhap so tai san can kiem ke: ";
			cin>>n;
			taisan=new TaiSan[n];
			cout<<"Ma phieu: ";
			fflush(stdin);
			gets(maPhieu);
			cout<<"Ngay kiem ke: ";
			fflush(stdin);
			cin.getline(ngayKiemKe,11);
			nhanvien.nhap();
			phong.nhap();
			for(int i=0; i<n; i++){
				taisan[i].nhap(tong);
			}
		}
		void xuat(){
			cout<<"Ma phieu: "<<maPhieu<<left<<setw(30)<<""<<"Ngay kiem ke: "<<ngayKiemKe<<endl;
			nhanvien.xuat();
			phong.xuat();
			cout<<left<<setw(20)<<"Ten tai san"<<setw(20)<<"So luong"<<setw(20)<<"Tinh trang"<<endl;
			for(int i=0; i<n; i++){
				taisan[i].xuat();
				if (i==n-1)
				   cout<<"So tai san da kiem ke: "<<n<<left<<setw(15)<<""<<"Tong so luong: "<<taisan[i].tong;
			}
		}
};
int main(){
	Phieu phieu;
	phieu.nhap();
	phieu.xuat();
	return 0;
}


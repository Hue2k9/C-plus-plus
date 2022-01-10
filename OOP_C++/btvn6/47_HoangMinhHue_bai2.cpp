#include<bits/stdc++.h>
using namespace std;
class NSX{
	private:
		char tenNSX[50],diaChi[100];
	public:
		void nhap(){
			cout<<"Ten nguoi san xuat: ";
			fflush(stdin);
			cin.getline(tenNSX,50);
			cout<<"Dia chi: ";
			fflush(stdin);
			cin.getline(diaChi,100);
		}
		void xuat(){
			cout<<"Nguoi san xuat: "<<tenNSX<<endl;
			cout<<"Dia chi: "<<diaChi<<endl;
		}
	friend class Hang;
};
class Hang{
	protected:
		char tenHang[50];
		NSX x;
		int donGia;
	public:
		Hang(){
			strcpy(this->tenHang,"TV");
			strcpy(this->x.tenNSX,"Hue");
			strcpy(this->x.diaChi,"Ha Noi");
			donGia=1000;
		};
		void nhap(){
			cout<<"Ten hang: ";
			fflush(stdin);
			gets(tenHang);
			x.nhap();
			cout<<"Don gia: ";
			cin>>donGia;
		}
		void xuat(){
			cout<<"Ten hang: "<<tenHang<<endl;
			x.xuat();
			cout<<"Don gia: "<<donGia<<endl;
		}	
};

//TiVi
class Date{
	private:
		int d,m,y;
	public:
		void nhap(){
		    cout<<"Ngay: ";
		    cin>>d;
		    cout<<"Thang: ";
		    cin>>m;
		    cout<<"Nam: ";
		    cin>>y;
		}
		void xuat(){
		    cout<<"Ngay nhap: "<<d<<"/"<<m<<"/"<<y<<endl;
		}
	friend class Tivi;
};
class Tivi : public Hang{
	private:
		double kichThuoc;
		Date NgayNhap;
	public:
		Tivi(){
		   kichThuoc=20;
		   NgayNhap.d=1;
		   NgayNhap.m=1;
		   NgayNhap.y=2021;
		}
		void nhap(){
			Hang::nhap();
			cout<<"Kich thuoc: ";
			cin>>kichThuoc;
			NgayNhap.nhap();
		}
		void xuat(){
			cout<<"\n\t\tTHONG TIN MAT HANG"<<endl;
			Hang::xuat();
			cout<<"Kich thuoc: "<<kichThuoc<<endl;
			NgayNhap.xuat();
		}
		
};
int main(){
	Tivi tivi;
	tivi.xuat();
	cout<<endl;
	tivi.nhap();
	tivi.xuat();
	return 0;
}

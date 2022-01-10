#include<bits/stdc++.h>
using namespace std;
class TaiSan{
	private:
		char tenTaiSan[50],tinhTrang[50];
		int soLuong;
	public:
		void nhap(){
			cout<<"Ten tai san: ";
			fflush(stdin);
			cin.getline(tenTaiSan,50);
			cout<<"So luong: ";
			cin>>soLuong;
			cout<<"Tinh trang: ";
			fflush(stdin);
			cin.getline(tinhTrang,50);
		}
		void xuat(){
			cout<<left<<setw(20)<<tenTaiSan<<setw(15)<<soLuong<<setw(20)<<tinhTrang<<endl;
		}
		int getSoLuong(){
			return soLuong;
		}
	friend class Phieu;
};
class NhanVien{
	private:
		char tenNhanVien[50],chucVu[50];
		char tenPhong[50],maPhong[10],truongPhong[50];
	public:
		void nhap(){
			cout<<"Ten nhan vien: ";
			fflush(stdin);
			cin.getline(tenNhanVien,50);
			cout<<"Chuc vu: ";
			fflush(stdin);
			cin.getline(chucVu,50);
			cout<<"Ten phong: ";
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
			cout<<left<<"Nhan vien kiem ke: "<<setw(18)<<tenNhanVien<<"Chuc vu: "<<chucVu<<endl;
			cout<<left<<"Kiem ke tai phong: "<<setw(18)<<tenPhong<<"Ma phong: "<<maPhong<<endl;
			cout<<"Truong phong: "<<truongPhong<<endl;
		}
	friend class Phieu;
};
class Phieu{
	private:
		char maPhieu[10],ngayKiemKe[11];
		NhanVien nv;
		int n;
		TaiSan *ts;
	public:
		void nhap(){
			cout<<"Nhap so luong tai san: ";
			cin>>n;
			ts=new TaiSan[n];
			cout<<"Ma phieu: ";
			fflush(stdin);
			gets(maPhieu);
			cout<<"Ngay kiem ke: ";
			fflush(stdin);
			gets(ngayKiemKe);
			nv.nhap();
			for(int i=0; i<n; i++){
				ts[i].nhap();
			}
		}
		void xuat(){
			int sum=0;
			cout<<"\t\tPHIEU KIEM KE TAI SAN"<<endl;	
			cout<<left<<"Ma phieu: "<<setw(22)<<maPhieu<<"Ngay kiem ke: "<<ngayKiemKe<<endl;
			nv.xuat();
			cout<<left<<setw(20)<<"Ten tai san"<<setw(15)<<"So luong"<<"Tinh trang"<<endl;
			for(int i=0; i<n; i++){
				sum+=ts[i].soLuong;
				ts[i].xuat();
			}
			cout<<left<<"So tai san da kiem ke: "<<setw(20)<<n<<"Tong so luong: "<<setw(15)<<sum<<endl<<endl;		
		}
	friend void Insert(Phieu &phieu, TaiSan ts, int pos);
	friend void Sort(Phieu a);		
};
void Insert(Phieu &a, TaiSan x, int pos){
	a.ts=(TaiSan*)realloc(a.ts,(a.n+1)*sizeof(TaiSan));
	for(int i=a.n; i>=pos; i--)
	   a.ts[i]=a.ts[i-1];
	   a.ts[pos-1]=x;
	   a.n++;
}
void Sort(Phieu a){
	for(int i=0; i<a.n-1; i++){
		for(int j=a.n-1; j>i; j--){
			if (a.ts[j-1].getSoLuong()< a.ts[j].getSoLuong()){
				TaiSan temp=a.ts[j-1];
				a.ts[j-1]=a.ts[j];
				a.ts[j]=temp;
			}
		}
	}
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
	cout<<"Nhap thong tin san san pham can chen: "<<endl;
	TaiSan x;
	x.nhap();
	//Chen
	Insert(a,x,2);
	cout<<"\nPhieu sau khi chen san pham: "<<endl;
	a.xuat();
	//Sap xep
	Sort(a);
	cout<<"\nPhieu sau khi sap xep la: "<<endl;
	a.xuat();
	return 0;
}

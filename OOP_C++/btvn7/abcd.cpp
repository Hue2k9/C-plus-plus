#include<iostream>
#include<string.h>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		char maNhanVien[10],hoTen[50],phongBan[50];
	public:
		void nhap(){
			cout<<"Ma nhan vien: ";
			fflush(stdin);
			gets(maNhanVien);
			cout<<"Ho ten: ";
			fflush(stdin);
			cin.getline(hoTen,50);
			cout<<"Phong ban: ";
			fflush(stdin);
			cin.getline(phongBan,50);
		}
		void xuat(){
			cout<<left<<"Ma nhan vien: "<<setw(25)<<maNhanVien;
			cout<<"Ho va ten: "<<setw(20)<<hoTen;
			cout<<"Phong ban: "<<phongBan<<endl;
		}
};
class CongViec{
	private:
		char congViec[50],ngayGiao[11],tinhTrang[50];
		int thoiGian;
	public:
		void Nhap(){
			cout<<"Cong viec: ";
			fflush(stdin);
			cin.getline(congViec,50);
			cout<<"Ngay giao: ";
			fflush(stdin);
			gets(ngayGiao);
			cout<<"Thoi gian: ";
			cin>>thoiGian;
			cout<<"Tinh trang: ";
			fflush(stdin);
			gets(tinhTrang);
		}
		int getThoiGian(){
			return thoiGian;
		}
		void setThoiGian(int thoiGian){
			this->thoiGian=thoiGian;
		}
		void Xuat(){
			cout<<setw(35)<<congViec;
			cout<<setw(15)<<ngayGiao;
			cout<<setw(10)<<thoiGian;
			cout<<tinhTrang<<endl;
		}
	friend class BangKe;
};
class BangKe{
	private:
		char thang[11],tuNgay[11],toiNgay[11];
		NhanVien nv;
		CongViec *cv;
		int n;
	public:
		void Nhap(){
			cout<<"Thang: ";
			fflush(stdin);
			gets(thang);
			cout<<"Tu ngay: ";
			fflush(stdin);
			gets(tuNgay);
			cout<<"Toi ngay: ";
			fflush(stdin);
			gets(toiNgay);
			nv.nhap();
			cout<<"Nhap so cong viec: ";
			cin>>n;
			cv=new CongViec[n];
			for(int i=0; i<n; i++){
				cv[i].Nhap();
			}
		}
		void Xuat(){
			int tongNgay=0;
			cout<<"\nCONG TY SMEDIA"<<endl;
			cout<<"\t\t\tBANG KE CONG VIEC"<<endl;
			cout<<left<<"Thang: "<<setw(25)<<thang;
			cout<<"Tu ngay: "<<setw(20)<<tuNgay;
			cout<<"Toi ngay: "<<toiNgay<<endl;
			nv.xuat();
			cout<<endl;
			cout<<left<<setw(10)<<"STT"<<setw(35)<<"Cong viec";
			cout<<setw(15)<<"Ngay giao";
			cout<<setw(10)<<"Thoi gian";
			cout<<"Tinh trang"<<endl;
			for(int i=0; i<n; i++){
				cout<<left<<setw(10)<<i;
				cv[i].Xuat();
				tongNgay+=cv[i].getThoiGian();
			}
	        cout<<"\tTong so ngay duoc giao: \t\t"<<tongNgay<<endl;
		}
	friend void TangThoiGian(BangKe x);
	friend void Sort(BangKe x);
	friend void Insert(BangKe &x, CongViec y, int pos);
};
void TangThoiGian(BangKe x){
	for(int i=0; i<x.n; i++){
		if (x.cv[i].getThoiGian()<15){
			x.cv[i].setThoiGian(x.cv[i].getThoiGian() + 1);
		}
	}
}
void Sort(BangKe x){
	for(int i=0; i<x.n-1; i++){
		for(int j=i; j<x.n; j++){
			if (x.cv[i].getThoiGian()>x.cv[j].getThoiGian()){
				CongViec temp=x.cv[i];
				x.cv[i]=x.cv[j];
				x.cv[j]=temp;
			}
		}
	}
}
void Insert(BangKe &x, CongViec y, int pos){
	x.cv=(CongViec*)realloc(x.cv, (x.n+1)*sizeof(CongViec));
	for(int i=x.n; i>=pos; i--)
	   x.cv[i]=x.cv[i-1];
	   x.cv[pos]=y;
	   x.n++;
}
int main(){
	BangKe x;
	x.Nhap();
	x.Xuat();
	TangThoiGian(x);
	Sort(x);
	cout<<endl;
	x.Xuat();
	//Chen
	cout<<"\n\t Bang sau khi chen: "<<endl;
	CongViec y;
	y.Nhap();
	Insert(x,y,0);
	x.Xuat();
	return 0;
}

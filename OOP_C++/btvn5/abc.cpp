#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		char maSinhVien[20], hoTen[50];
		int ngay, thang, nam;
		char gioiTinh[10],xepLoai[10];
		double diemTB;
	public:
		SinhVien(){
			strcpy(this->maSinhVien,"");
			strcpy(this->hoTen,"");
			strcpy(this->gioiTinh,"");
			ngay=0;
			thang=0;
			nam=0;
			diemTB=0;
			strcpy(this->xepLoai,"");
		}
		SinhVien(const char maSinhVien[20],const char hoTen[50],const char gioiTinh[10],int ngay, int thang, int nam, double diemTB, const char xepLoai[10]){
			strcpy(this->maSinhVien,maSinhVien);
			strcpy(this->hoTen,hoTen);
			strcpy(this->gioiTinh,gioiTinh);
			this->ngay=ngay;
			this->thang=thang;
			this->nam=nam;
			this->diemTB=diemTB;
			strcpy(this->xepLoai,xepLoai);	
		}
		~SinhVien(){
		}
		void nhap();
		void xuat();
		void setNgaySinh(int ngay, int thang, int nam){
			if (ngay>0 && ngay<=31)
			   this->ngay=ngay;
			if (thang>0 && thang<=12)
			   this->thang=thang;
			if (nam>1000 && nam<=2021)
			   this->nam=nam;
		}
		void setDiemTB(double diemTB){
			if (diemTB>0 && diemTB<=10)
			   this->diemTB=diemTB;
		}
		int getNgay(){
			return ngay;
		}
		int getThang(){
			return thang;
		}
		int getNam(){
			return nam;
		}
		double getDiemTB(){
			return diemTB;
		}
	friend bool Check(SinhVien sv);
};
void SinhVien::nhap(){
	cout<<"Ma sinh vien: ";
	fflush(stdin);
	gets(maSinhVien);
	cout<<"Ho ten: ";
	fflush(stdin);
	cin.getline(hoTen,50);
	cout<<"Gioi tinh: ";
	fflush(stdin);
	gets(gioiTinh);
	cout<<"Ngay sinh: ";
	cin>>ngay;
	cout<<"Thang sinh: ";
	cin>>thang;
	cout<<"Nam sinh: ";
	cin>>nam;
	cout<<"Diem trung binh: ";
	cin>>diemTB;
	cout<<"Xep loai dao duc: ";
	fflush(stdin);
	gets(xepLoai);
}
void SinhVien::xuat(){
	cout<<"Ma sinh vien: "<<maSinhVien<<endl;
	cout<<left<<"Ho ten: "<<setw(20)<<hoTen<<"Gioi tinh: "<<setw(10)<<gioiTinh<<endl;
	cout<<"Ngay sinh: "<<getNgay()<<"/"<<getThang()<<"/"<<getNam()<<endl;
	cout<<left<<"Diem trung binh: "<<setw(10)<<getDiemTB()<<"Xep loai: "<<setw(15)<<xepLoai<<endl;
}
bool Check(SinhVien sv){
		if ((sv.xepLoai[0]=='T' || sv.xepLoai[0]=='t')&& sv.xepLoai[1]=='o' && sv.xepLoai[2]=='t' &&strlen(sv.xepLoai)==3)
		  return 1;
	return 0;
}
int main(){
	int n;
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	SinhVien sv1("2020","Hue","nu",9,7,2002,9.9,"xs"),*sv=new SinhVien[n];
	sv1.xuat();
	cout<<"Nhap vao 1 mang "<<n<<" sinh vien: "<<endl;
	for(int i=0; i<n; i++){
		sv[i].nhap();
		cout<<endl;
	}
	cout<<"Mang vua nhap: "<<endl;
	for(int i=0; i<n; i++){
		sv[i].xuat();
		cout<<endl;
	}
	cout<<"\n===Hien thi sinh vien co xep loai dao duc tot==="<<endl;
	for(int i=0; i<n; i++){
		if (Check(sv[i])==1){
			sv[i].xuat();
			cout<<endl;
		}
	}
	delete [] sv;
	return 0;
}

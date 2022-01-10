#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		char hoTen[50],gioiTinh[10];
		int tuoi;
	public:
		void Nhap(){
			cout<<"Nhap ho ten: ";
			fflush(stdin);
			cin.getline(hoTen,50);
			cout<<"Tuoi: ";
			cin>>tuoi;
			cout<<"Gioi tinh: ";
			fflush(stdin);
			gets(gioiTinh);
		}
		int getTuoi(){
			return tuoi;
		}
		void setTuoi(int tuoi){
			this->tuoi=tuoi;
		}
		void Xuat(){
			cout<<"Ho ten: "<<hoTen<<endl;
			cout<<"Tuoi: "<<tuoi<<endl;
			cout<<"Gioi tinh: "<<gioiTinh<<endl;
		}
};
class NhanVien : public Nguoi{
	private:
		char maNV[10];
		string chucVu;
		int luong;
	public:
		void Nhap(){
			Nguoi::Nhap();
			cout<<"Ma nhan vien: ";
			fflush(stdin);
			gets(maNV);
			cout<<"Chuc vu: ";
			fflush(stdin);
	        cin>>chucVu;
			cout<<"Luong: ";
			cin>>luong;
		}
		string getChucVu(){
			return chucVu;
		}
		void setChucVu(string chucVu){
			this->chucVu=chucVu;
		}
		int getLuong(){
			return luong;
		}
		void setLuong(int luong){
			this->luong=luong;
		}
		void Xuat(){
			Nguoi::Xuat();
			cout<<"Ma nhan vien: "<<maNV<<endl;
			cout<<"Chuc vu: "<<getChucVu()<<endl;
			cout<<"Luong: "<<getLuong()<<endl;
		}
};
class CongTy{
	private:
		char maCT[10],diaChi[50];
		NhanVien *x;
		int n;
	public:
		void Nhap(){
			cout<<"Ma cong ty: ";
			fflush(stdin);
			gets(maCT);
			cout<<"Dia chi: ";
			fflush(stdin);
			cin.getline(diaChi,50);
			cout<<"Nhap so luong nhan vien: ";
			cin>>n;
			x= new NhanVien[n];
			for(int i=0; i<n; i++){
				x[i].Nhap();
			}
		}
		void Xuat(){
			cout<<"===Thong Tin Cong Ty==="<<endl;
			cout<<"Ma cong ty: "<<maCT<<endl;
			cout<<"Dia chi: "<<diaChi<<endl;
			for(int i=0; i<n; i++){
				cout<<"Nhan vien thu "<<i<<endl;
				x[i].Xuat();
				cout<<endl;
			}
		}
	friend void SuaThongTin(CongTy a);
	friend void SapXep(CongTy a);
};
void SuaThongTin(CongTy a){
	for(int i=0; i<a.n; i++){
		if (a.x[i].getTuoi()>40 && a.x[i].getChucVu()=="ketoan"){
		     	a.x[i].setLuong(a.x[i].getLuong()*0+1000);
		}
	}
}
void SapXep(CongTy a){
	for(int i=0; i<a.n-1; i++){
		for(int j=i; j<a.n; j++){
			if (a.x[i].getLuong()>a.x[j].getLuong()){
				NhanVien temp=a.x[i];
			    a.x[i]=a.x[j];
			    a.x[j]=temp;
			}
		}
	}
}
int main(){
	CongTy a;
	a.Nhap();
	a.Xuat();
	SuaThongTin(a);
	cout<<"\n\nThong tin sau khi duoc sua: "<<endl;
	a.Xuat();
	SapXep(a);
	cout<<"\n\nThong tin sau khi sap xep: "<<endl;
	a.Xuat();
	return 0;
}

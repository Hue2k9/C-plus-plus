#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		char hoTen[50],soDienThoai[11],diaChi[100];
	public:
		void nhap(){
			cout<<"Ho ten: ";
	        fflush(stdin);
	        cin.getline(hoTen,50);
	        cout<<"So dien thoai: ";
	        fflush(stdin);
         	gets(soDienThoai);
	        cout<<"Dia chi: ";
	        fflush(stdin);
	        cin.getline(diaChi,100);  
		}
		void xuat(){
			cout<<"Ho va ten nguoi di cho: "<<hoTen<<endl;
	        cout<<"So dien thoai: "<<soDienThoai<<endl;
	        cout<<"Dia chi: "<<diaChi<<endl;			
		}
	friend class Phieu;
};
class Hang{
	private:
		char tenHang[50];
		int donGia,soLuong,thanhTien,tong;
	public:
		void nhap(int &tong);
		void xuat(int tong);
		void xuatTong(int tong);
	friend class Phieu;
};
void Hang::nhap(int &tong){
	this->tong=tong;
	cout<<"Ten hang: ";
	fflush(stdin);
	cin.getline(tenHang,50);
	cout<<"Don gia: ";
	cin>>donGia;
	cout<<"So luong: ";
	cin>>soLuong;
	thanhTien=soLuong*donGia;
	tong+=thanhTien;
}
void Hang::xuat(int tong){
	cout<<left<<setw(20)<<tenHang<<setw(15)<<donGia<<setw(15)<<soLuong<<setw(15)<<thanhTien<<endl;
}
void Hang::xuatTong(int tong){
	cout<<left<<setw(35)<<""<<"Cong thanh tien: "<<tong;
}
class Phieu{
	private:
		char maPhieu[10],ngay[11];
		Nguoi nguoi;
		int tong,n;
		Hang *hang;
		
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap(){
	tong=0;
	cout<<"Nhap so mat hang can mua: ";
	cin>>n;
	hang=new Hang[n];
	cout<<"Ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	cout<<"Ngay: ";
	fflush(stdin);
	gets(ngay);
	nguoi.nhap();
	for(int i=0; i<n; i++){
		hang[i].nhap(tong);
	}
}
void Phieu::xuat(){
	cout<<"\t\tPHIEU DI CHO"<<endl;
	cout<<"Ma phieu:  "<<maPhieu;
	cout<<"\t\t\tNgay: "<<ngay<<endl;
	nguoi.xuat();
	cout<<endl;
	cout<<left<<setw(20)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
	for(int i=0; i<n; i++){
		hang[i].xuat(tong);
		if (i==n-1)
		  hang[i].xuatTong(tong);
	}
}
int main(){
	Phieu phieu;
	phieu.nhap();
	phieu.xuat();
	return 0;
}

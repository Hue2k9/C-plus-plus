#include<bits/stdc++.h>
using namespace std;
/* 
    class NCC:
       char maNhaCC[10];
       char tenNhaCC[50];
       char diaChi[255];
       char soDienThoai[11];
    class SanPham:
       char maSP[10];
       char tenSP[50];
       char tinhTrang[10];
       int Soluong;
       int donGia;
    class Phieu:
       char maPhieu[10];
       NCC a;
       SanPham *sp;
*/
class NCC{
	private:
		char maNhaCC[10];
        char tenNhaCC[50];
        char diaChi[255];
        char soDienThoai[11];
    public:
    	void nhap(){
    		cout<<"Ma nha cung cap: ";
	        fflush(stdin);
	        gets(maNhaCC);
    		cout<<"Ten nha cung cap: ";
	        fflush(stdin);
	        cin.getline(tenNhaCC,50);
	        cout<<"SDT: ";
	        fflush(stdin);
	        gets(soDienThoai);
	        cout<<"Dia chi: ";
	        fflush(stdin);
	        cin.getline(diaChi,255);
		}
		void xuat(){
			cout<<"Ma nha cung cap: "<<maNhaCC<<left<<setw(45)<<""<<"Ten nha cung cap: "<<tenNhaCC<<endl;
	        cout<<"Dia chi: "<<diaChi<<left<<setw(45)<<""<<"SDT: "<<soDienThoai<<endl<<endl;
		}	
};
class SanPham{
	private:
		int n;
		char maSP[10],tenSP[50],tinhTrang[10];
		int soLuong,donGia,thanhTien;
		long int tong;
	public:
		void nhap(long int &tong);
		void xuat(long int tong);
		void xuatTong(long int tong);
	friend class Phieu;
};
void SanPham::nhap(long int &tong){
	this->tong=tong;
	cout<<"Ma san pham: ";
	fflush(stdin);
	gets(maSP);
	cout<<"Ten san pham: ";
	fflush(stdin);
	cin.getline(tenSP,50);
	cout<<"Tinh trang: ";
	fflush(stdin);
	cin.getline(tinhTrang,10);
	cout<<"So luong: ";
	cin>>soLuong;
	cout<<"Don gia: ";
	cin>>donGia;
	thanhTien=donGia*soLuong;
	tong +=thanhTien;
}
void SanPham::xuat(long int tong){
	cout<<left<<setw(15)<<maSP<<setw(20)<<tenSP<<setw(15)<<tinhTrang<<setw(15)<<soLuong;
	cout<<setw(20)<<donGia<<setw(20)<<thanhTien;
}
void SanPham::xuatTong(long int tong){
	 cout<<right<<setw(62)<<"Tong so tien: "<<tong;
}
class Phieu{
	private:
		char maPhieu[10],maNhaCC[10],tenNhaCC[50],diaChi[50];
		char soDienThoai[11];
		NCC a;
		int n;
	    long int tong;
	    SanPham *sp;
	public:
		void nhap();
		void xuat();
};
void Phieu::nhap(){
	tong=0;
	cout<<"Nhap so luong san pham: ";
	cin>>n;
	sp=new SanPham[n];
	cout<<"Ma phieu: ";
	fflush(stdin);
	gets(maPhieu);
	a.nhap();
	for(int i=0; i<n; i++){
		sp[i].nhap(tong);
	}
}
void Phieu::xuat(){
	cout<<"\n\nDai hoc Cong Nghiep Ha Noi"<<endl;
	cout<<"\t\t\t\tPHIEU NHAP THIET BI MAY TINH"<<endl;
	cout<<"Ma phieu: "<<maPhieu<<endl;
	a.xuat();
	cout<<left<<setw(15)<<"Ma san pham"<<setw(20)<<"Ten san pham"<<setw(15)<<"Tinh trang";
	cout<<setw(15)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
	for(int i=0; i<n; i++){
		sp[i].xuat(tong);
		cout<<endl;
		if (i==n-1){
			cout<<"Tong so san pham: "<<n;
	        sp[i].xuatTong(tong);
		}
	}
}
int main(){
	Phieu phieu;
	phieu.nhap();
	phieu.xuat();
	return 0;
}

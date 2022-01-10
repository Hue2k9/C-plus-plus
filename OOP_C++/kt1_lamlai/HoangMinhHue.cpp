#include<bits/stdc++.h>
using namespace std;
class SP{
	private:
		char maSP[5],tenSP[50];
		int soLuong, donGia;
	public:
		int getThanhTien(){
			return soLuong*donGia;
		}
		void nhap(){
			cout<<"Ma san pham: ";
			fflush(stdin);
			gets(maSP);
			cout<<"Ten san pham: ";
			fflush(stdin);
			cin.getline(tenSP,50);
			cout<<"So luong: ";
			cin>>soLuong;
			cout<<"Don gia: ";
			cin>>donGia;
		}
		void xuat(){
			cout<<left<<setw(15)<<maSP<<setw(20)<<tenSP<<setw(15)<<soLuong<<setw(15)<<donGia;
			cout<<getThanhTien()<<endl;
		}
	friend class Phieu;
};
class NCC{
	private:
		char maNCC[5],tenNCC[50],diaChi[100],soDienThoai[50];
	public:
		void nhap(){
			cout<<"Ma nha cung cap: ";
			fflush(stdin);
			gets(maNCC);
			cout<<"Ten nha cung cap: ";
			fflush(stdin);
			cin.getline(tenNCC,50);
			cout<<"Dia chi: ";
			fflush(stdin);
			cin.getline(diaChi,100);
			cout<<"So dien thoai: ";
			fflush(stdin);
			gets(soDienThoai);
		}
		void xuat(){
			cout<<left<<"Ma NCC: "<<setw(20)<<maNCC<<"Ten NCC: "<<tenNCC<<endl;
			cout<<left<<"Dia chi: "<<setw(20)<<diaChi<<"Sdt: "<<soDienThoai<<endl;
		}
};
class Phieu{
	private:
		char maPhieu[5],ngayLap[11];
	    SP *sp;
	    NCC ncc;
		int tong,n;	
	public:
		void nhap(){
			cout<<"Nhap so luong san pham: ";
			cin>>n;
			sp=new SP[n];
			cout<<"Ma phieu: ";
			fflush(stdin);
			gets(maPhieu);
			cout<<"Ngay lap: ";
			fflush(stdin);
			gets(ngayLap);
			ncc.nhap();
			for(int i=0; i<n; i++){
				sp[i].nhap();
			}
		}
		void xuat(){
			tong=0;
			cout<<"\tDai hoc Victory"<<endl;
			cout<<"\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
			cout<<left<<"Ma phieu: "<<setw(20)<<maPhieu<<"Ngay lap: "<<ngayLap<<endl;
			ncc.xuat();
            cout<<left<<setw(15)<<"Ma san pham"<<setw(20)<<"Ten san pham"<<setw(15)<<"So luong";
			cout<<setw(15)<<"Don gia"<<"Thanh tien"<<endl;
			for(int i=0; i<n; i++){
				sp[i].xuat();
				tong+=sp[i].getThanhTien();
			}
			cout<<left<<setw(44)<<"\t\t\tTONG"<<tong<<endl;
			cout<<"\tHieu truong\t\tPhong tai chinh\t\tNguoi lap"<<endl;
		}
	friend void Sort(Phieu a);
	friend void Insert(Phieu &a, SP x, int pos);
};
void Sort(Phieu a){
	for(int i=0; i<a.n-1; i++){
		for(int j=a.n-1; j>i; j--){
			if (a.sp[j-1].getThanhTien() < a.sp[j].getThanhTien()){
				SP temp=a.sp[j-1];
				   a.sp[j-1]=a.sp[j];
				   a.sp[j]=temp;
			}
		}
	}
}
void Insert(Phieu &a, SP x, int pos){ 
	a.sp=(SP*)realloc(a.sp , (a.n+1)*sizeof(SP));
	for(int i=a.n; i>=pos; i--)
	   a.sp[i]=a.sp[i-1];
	   a.sp[pos]=x;
	   a.n++;
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
	//Sap xep
	cout<<"\nPhieu sau khi sap xep giam dan\n";
	Sort(a);
	a.xuat();
	//Chen
	SP sp;
	sp.nhap();
    Insert(a,sp,0);
    cout<<"\nPhieu sau khi chen\n";
    a.xuat();
	return 0;
}

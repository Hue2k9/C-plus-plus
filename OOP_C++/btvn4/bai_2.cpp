#include<bits/stdc++.h>
using namespace std;
/*
   *NCC:
       char maNCC[5];
       char tenNCC[50];
       char diaChi[200];
   *Phieu:
       char maPhieu[10];
       char ngayLap[10];
       NCC a;
   *Hang:
       char tenHang[50];
       int gia;
       int soLuong;
*/
class NCC{
	private:
	    char maNCC[5];
        char tenNCC[50];
        char diaChi[200];
    public:
    	void nhap(){
    		cout<<"Ma NCC: ";
			fflush(stdin);
			gets(maNCC);
			cout<<"Ten NCC: ";
			fflush(stdin);
			cin.getline (tenNCC,50);
			cout<<"Dia chi: ";
			fflush(stdin);
			cin.getline (diaChi,200);
		}
		void xuat(){
			cout<<"   Ma NCC: "<<maNCC<<"\t\t\tTen NCC: "<<tenNCC<<endl;
			cout<<"   Dia chi: "<<diaChi<<endl;
		}
};
class Phieu{
	private:
		char maPhieu[10],maNCC[5],ngayLap[10];
		char tenNCC[50],diaChi[200];
		NCC a;
	public:
		void nhap(){
			cout<<"Ma phieu: ";
			fflush(stdin);
			gets(maPhieu);
			cout<<"Ngay lap: ";
			gets(ngayLap);
			a.nhap();
		}
		void xuat(){
			cout<<"\t\tPHIEU NHAP HANG"<<endl;
			cout<<"   Ma phieu: "<<maPhieu<<"\t\tNgay lap: "<<ngayLap<<endl;
			a.xuat();
		}
};
class Hang{
	private:
		char tenHang[50];
		double gia,thanhTien,tong;
		int soLuong;
	public:
		void nhap(double &tong){
			this->tong=tong;
			cout<<"Ten hang: ";
			fflush(stdin);
			cin.getline(tenHang,50);
			cout<<"Gia: ";
			cin>>gia;
			cout<<"So luong: ";
			cin>>soLuong;
			thanhTien=gia*soLuong;
			tong+=thanhTien;
		}
		void xuat(){
			cout<<left<<setw(20)<<tenHang<<setw(15)<<gia<<setw(20)<<soLuong<<setw(15)<<thanhTien;
		}
		void xuatTong(double tong){
			cout<<left<<setw(20)<<""<<setw(15)<<""<<setw(20)<<"Tong thanh tien"<<setw(15)<<tong;
		}
};

int main(){
	Phieu p;
	int n;
	double tong=0;
	cout<<"Nhap so mat hang: ";
	cin>>n;
	Hang *h=new Hang[n];
	p.nhap();
	for(int i=0; i<n; i++){
		h[i].nhap(tong);
	}
	p.xuat();
	cout<<left<<setw(20)<<"Ten hang"<<setw(15)<<"Gia"<<setw(20)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
	for(int i=0; i<n; i++){
		h[i].xuat();
		cout<<endl;
		if (i==n-1)
		  	h[i].xuatTong(tong);
	}
	return 0;
}

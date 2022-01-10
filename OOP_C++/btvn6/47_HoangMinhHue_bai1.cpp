#include<bits/stdc++.h>
using namespace std;
class Vehicle{
	protected:
		char nhanHieu[50];
		int namSX;
		char hang[50];
	public:
		void nhap(){
			cout<<"Nhan hieu: ";
			fflush(stdin);
		    gets(nhanHieu);
		    cout<<"Nam san xuat: ";
		    cin>>namSX;
		    cout<<"Ten hang: ";
		    fflush(stdin);
		    gets(hang);
		};
		void xuat(){
			cout<<"Nhan hieu: "<<nhanHieu<<endl;
			cout<<"Nam san xuat: "<<namSX<<endl;
			cout<<"Ten hang: "<<hang<<endl;
		};
};
class Oto : public Vehicle{
	private:
		int soChoNgoi;
		float dungTich;
	public:
		void nhap(){
			Vehicle::nhap();
			cout<<"Nhap so cho ngoi: ";
			cin>>soChoNgoi;
			cout<<"Dung tich: ";
			cin>>dungTich;
		}
		void xuat(){
			Vehicle::xuat();
			cout<<"So cho ngoi: "<<soChoNgoi<<endl;
			cout<<"Dung tich: "<<dungTich<<endl;
		}
};
class Moto : public Vehicle{
	private:
		int phanKhoi;
	public:
		void nhap(){
			Vehicle::nhap();
			cout<<"Phan khoi: ";
			cin>>phanKhoi;
		}
		void xuat(){
			Vehicle::xuat();
			cout<<"Phan khoi: "<<phanKhoi<<endl;
		}
};
int main(){
	Oto oto;
	Moto moto;
	cout<<"Nhap vao thong tin oto: "<<endl;
	oto.nhap();
	cout<<"Nhap vao thong tin moto: "<<endl;
	moto.nhap();
	cout<<"\nThong tin oto: "<<endl;
	oto.xuat();
	cout<<"\nThong tin moto: "<<endl;
	moto.xuat();
	return 0;
}

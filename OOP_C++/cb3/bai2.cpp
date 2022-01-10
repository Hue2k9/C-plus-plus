#include<iostream>
using namespace std;
class DATE{
	private:
		int d,m,y;
	public:
		void Nhap(){
			cout<<"Nhap ngay: ";
			cin>>d;
			cout<<"Thang: ";
			cin>>m;
			cout<<"Nam: ";
			cin>>y;
		}
		void Xuat(){
			cout<<"Ngay: "<<d;
			cout<<"\nThang: "<<m;
			cout<<"\nNam: "<<y;
		}
};
class NHANSU{
	private:
		char Manhansu[10],Hoten[50];
		DATE NS;
	public:
		void Nhap(){
			cout<<"Nhap ma nhan su: ";
			gets(Manhansu);
			cout<<"Nhap ho ten: ";
			fflush(stdin);
			fgets(Hoten,sizeof(Hoten),stdin);
			NS.Nhap();
		}
		void Xuat(){
			cout<<"\n===Thong tin nhan su===";
			cout<<"\nMa nhan su: "<<Manhansu;
			cout<<"\nHo ten: "<<Hoten;
			NS.Xuat();
		}
};
int main(){
	NHANSU n;
	n.Nhap();
	n.Xuat();
	return 0;
}

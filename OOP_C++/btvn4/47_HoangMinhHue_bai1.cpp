#include <bits/stdc++.h>
using namespace std;
class Date{
	private:
		int d,m,y;
	public:
		void nhap(){
			
			cout<<"Nhap ngay: ";
			cin>>d;
			cout<<"Nhap thang: ";
			cin>>m;
			cout<<"Nhap nam: ";
			cin>>y;
		}
		void xuat(){
			cout<<d<<"/"<<m<<"/"<<y;
	    }
		friend class NhanSu;
};
class NhanSu{
	private:
	    int maNhanSu;
		char hoTen[50];
		Date NS;
	public:
		void nhap(int maNhanSu){
			cout<<"Nhap ho ten: ";
			fflush(stdin);
//			fgets(hoTen,sizeof(hoTen),stdin);
			cin.getline (hoTen,50);
			NS.nhap();
		}
	    void xuat(int &maNhanSu){
	    	this->maNhanSu=maNhanSu;
			maNhanSu++;
	    	cout<<left<<setw(20)<<maNhanSu<<setw(20)<<hoTen;
			NS.xuat();
		}
};
int main(){
	int n,maNhanSu=0;
	NhanSu *s=new NhanSu[n+1];
	cout<<"Nhap n: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		s[i].nhap(maNhanSu);
	}
	cout<<"\t\tNHAN SU"<<endl;
	cout<<left<<setw(20)<<"Ma nhan su"<<setw(20)<<"Ho ten"<<setw(20)<<"Ngay"<<endl;
	for(int i=0; i<n; i++){
		s[i].xuat(maNhanSu);
		cout<<endl;
	}
	return 0;
}

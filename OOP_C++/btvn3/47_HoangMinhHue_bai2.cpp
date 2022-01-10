#include<iostream>
#include<string>
using namespace std;
class NSX{
	private:
		char maNSX[20];
	    char tenNSX[20];
	    char dcnSX[20];
	public:
		void nhap(){
			cout<<"Nhap NSX: ";
		    fflush(stdin);
		    gets(maNSX);
		    cout<<"Nhap ten NSX: ";
		    gets(tenNSX);
		    cout<<"Nhap dcn sx: ";
		    gets(dcnSX);
	    }
	    void xuat(){
		    cout<<"NSX: "<<maNSX;
		    cout<<"\nTen NSX: "<<tenNSX;
		    cout<<"\nDCN sx: "<<dcnSX;
	    }
	
};
class Hang{
	private:
		char maHang[20],tenHang[20];
	    NSX x;
	public:
		void nhap(){
			cout<<"Nhap ma hang: ";
		    fflush(stdin);
		    gets(maHang);
		    cout<<"Ten hang: ";
		    fflush(stdin);
		    fgets(tenHang,sizeof(tenHang),stdin);
		    x.nhap();
	    }
	    void xuat(){
		    cout<<"\nMa hang: "<<maHang;
		    cout<<"\nTen hang: "<<tenHang;
	        x.xuat();
	    }
};
int main(){
	int n;
	Hang *h;
	h=new Hang[n];
	cout<<"\nNhap so hang: ";
	cin>>n;
	for(int i=0; i<n; i++){
		h[i].nhap();
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		cout<<"Thong tin mat hang "<<i+1;
		h[i].xuat();
		cout<<endl<<endl;
	}
	delete [] h;
	return 0;
}

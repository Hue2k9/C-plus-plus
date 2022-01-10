#include<iostream>
#include<math.h>
using namespace std;
class PhanSo{
	private:
		int a,b;
	public:
		PhanSo(int a,int b);
		PhanSo();
		void Nhap();
		void Xuat();
		void Rut();
		~PhanSo(){
			cout<<"\nHAM HUY DUOC GOI";
		}
};
PhanSo::PhanSo(int a, int b){
	this->a=a;
	this->b=b;
}
PhanSo::PhanSo(){
	a=0;
	b=0;
}
void PhanSo::Nhap(){
	cout<<"Nhap a= "; cin>>a;
	cout<<"Nhap b= "; cin>>b;
}
void PhanSo::Xuat(){
	  cout<<"a/b="<<a<<"/"<<b<<endl;
}
int UCLN(int a, int b){
	int c=abs(a), d=abs(b);
	if (c==0 || d==0)
	  return c+d;
	while(c!=d){
		if (c>d)
		   c-=d;
		else
		   d-=c;
	}
	return c;
}
void PhanSo::Rut(){
	int k=UCLN(a,b);
	cout<<a<<"/"<<b<<"=";
	if (b!=0){
	    if (a==0)
	       cout<<0;
	    if ((a>0 && b>0) || (a<0 && b<0)){
		    if (b/k!=1)
		      cout<<a/k<<"/"<<b/k;
		    else
		      cout<<a/k;
	    }
	    if((a<0 &&b>0) || (a>0 && b<0)){
		   a=abs(a);
		   b=abs(b);
		    if (b/k!=1)
		       cout<<"-"<<a/k<<"/"<<b/k;
		    else
		       cout<<"-"<<a/k;
	    }
   }
   else{
   	   cout<<"Math error!";
   }
}
int main(){
	PhanSo p1(2,4),p2;
	cout<<"Phan so P: ";
	p1.Xuat();
	p1.Rut();
	cout<<"\nPhan so Q: ";
	cout<<"\n";
	p2.Nhap();
	p2.Xuat();
	p2.Rut();
	return 0;
}

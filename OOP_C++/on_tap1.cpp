#include<bits/stdc++.h>
using namespace std;
class TuGiac{
	private:
		int a,b,c,d;
	public:
		TuGiac(){
		    this->a=1;
			this->b=1;
			this->c=1;
			this->d=1;	
		}
		TuGiac(int a, int b, int c, int d){
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		int operator--(){
			return a*b*c*d;
		}
		friend istream& operator>>(istream& is, TuGiac &y){
			cout<<"Nhap canh a: ";
			is>>y.a;
			cout<<"Nhap canh b: ";
			is>>y.b;
			cout<<"Nhap canh c: ";
			is>>y.c;
			cout<<"Nhap canh d: ";
			is>>y.d;
			return is;
		}
		friend ostream& operator<<(ostream& os, TuGiac y){
			os<<"a= "<<y.a<<endl;
			os<<"b= "<<y.b<<endl;
			os<<"c= "<<y.c<<endl;
			os<<"d= "<<y.d<<endl;
		    return os;
		}
		
};
int main(){
	TuGiac P,Q;
	fstream f;
	f.open("TuGiac.txt",ios::out);
	cout<<"Nhap thong tin tu giac P: "<<endl;
	cin>>P;
	cout<<"Nhap thong tin tu giac Q: "<<endl;
	cin>>Q;
	//P
	cout<<"\nThong tin tu giac P: "<<endl;
	cout<<P<<endl;
	f<<"Thong tin tu giac P: "<<endl;
	f<<P<<endl;
	//Q
	cout<<"\nThong tin tu giac Q: "<<endl;
	cout<<Q<<endl;
	f<<"Thong tin tu giac Q: "<<endl;
	f<<Q<<endl;
	
	cout<<"\nChu vi cua 2 tu giac vua nhap: "<<endl;
	int ChuViP=--P;
	int ChuViQ=--Q;
	cout<<"Chu vi tu giac P: "<<ChuViP<<endl;
	cout<<"Chu vi tu giac Q: "<<ChuViQ<<endl;
	return 0;
}

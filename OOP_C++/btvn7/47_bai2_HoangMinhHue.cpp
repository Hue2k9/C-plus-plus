#include<bits/stdc++.h>
using namespace std;
class Bac2{
	private:
		double a,b,c;
	public:
		//Ham toan tu nhap
		friend istream& operator >> (istream& is, Bac2 &p2){
			cout<<"Nhap a: ";
			is>>p2.a;
			cout<<"Nhap b: ";
			is>>p2.b;
			cout<<"Nhap c: ";
			is>>p2.c;
			return is;
		}
		//Phuong thuc toan tu doi dau
		friend Bac2 operator * (Bac2 &pt, int k){
			pt.a = pt.a * k;
			pt.b = pt.b * k;
			pt.c = pt.c * k;
			return pt;
		}
		//Phuong thuc toan tu +
		friend Bac2 operator + (Bac2& pt1, Bac2& pt2){
			Bac2 pt;
			pt.a = pt1.a + pt2.a;
			pt.b = pt1.b + pt2.b;
			pt.c = pt1.c + pt2.c;
			return pt;
		}
		//Phuong thuc toan tu -
		friend Bac2 operator - (Bac2& pt1, Bac2& pt2){
			Bac2 pt;
			pt.a = pt1.a - pt2.a;
			pt.b = pt1.b - pt2.b;
			pt.c = pt1.c - pt2.c;
			return pt;
		}
		//Ham toan tu xuat
		friend ostream& operator << (ostream &os, Bac2 &p2){
            string d1="",d2="",d3="";
			if (p2.b>=0)
			    d2="+";
			if (p2.c>=0)
			    d3="+";
			os<<"y= "<<d1<<p2.a<<"x^2"<<d2<<p2.b<<"x"<<d3<<p2.c;	
			return os;
		}
};
int main(){
	Bac2 pt1,pt2,pt3;
	cin>>pt1;
	cin>>pt2;
	//Doi dau
	pt1=pt1*(-1);
	pt2=pt2*(-1);
	cout<<"PT1,2 sau khi doi dau: "<<endl;
	cout<<"Pt1: "<<pt1<<endl;
	cout<<"pt2: "<<pt2<<endl;
	//Tong hieu
	Bac2 tong=pt1+pt2, hieu=pt1-pt2;
	cout<<"Tong: "<<tong<<endl;
	cout<<"Hieu: "<<hieu<<endl;
	return 0;
}

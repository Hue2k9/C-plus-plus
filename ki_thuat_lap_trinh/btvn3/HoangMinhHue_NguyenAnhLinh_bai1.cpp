#include <iostream>
#include <math.h>
using namespace std;
void NhapN(int &n){
	cout<<"Nhap n= ";
	cin>>n;
}

void NhapX(float x){
	cout<<"Nhap x= ";
	cin>>x;
}
void TinhL(int n, float x){
	float l;
	if (n % 2 ==0){
		l=abs(log(x)/log(2)+ exp(n)+2021);
	}
	else{
		l=2021;
		int tu=1,mau=1;
		for(int i=1; i<=n; i++){
			mau*=x;
			if ( i % 2 !=0){
			tu=i;
			l=l+(float)tu/mau;
	}
		}
	}
	cout<<"L= "<<l;
}
int main(){
	int n;
	float x;
	NhapN(n);
	NhapX(x);
	TinhL(n,x);
	return 0;
}

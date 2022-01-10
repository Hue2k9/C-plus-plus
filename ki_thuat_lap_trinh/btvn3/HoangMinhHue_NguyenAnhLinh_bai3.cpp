#include <iostream>
#include <math.h>
using namespace std;

int b;
void NhapN(int &n){
	cout<<"Nhap n= ";
	cin>>n;
}

void NhapB(){
	cout<<"Nhap b= ";
	cin>>b;
}

bool SNT(int number){
	for(int i=2; i<=sqrt(number); i++)
	    if (number % i ==0)
	       return 0;
	return number>1;
}

void ThemPhanTu(float x[], int &n, int vt, int k){
	for(int i=n; i>=vt; i--)
	  x[i]=x[i-1];
	  x[vt]=k;
	  n++;
}

void TBC(float x[], int n){
	float sum=0;
	float dem=0;
	float tbc;
	for(int i=0; i<n; i++){
		if (x[i] >10){
			sum+=x[i];
			dem++;
		}
	}
	tbc=(float)sum/dem;
	cout<<"trung binh cong: "<<tbc;
}
void NhapMang(float x[], int n){
	for(int i=0; i<n; i++){
		cout<<"x["<<i<<"]= ";
		cin>>x[i];
	}
}


void XuatMang(float x[], int n){
	for(int i=0; i<n; i++){
		cout<<x[i]<<" ";
	}
}

void ThemB(float x[], int &n){
	if (SNT(b)==true){
		cout<<"Khong the chen\n";
	}
	else{
		for(int i=0; i<n; i++){
		if (SNT(x[i]) ==true){
			ThemPhanTu(x,n,i,b);
			i++;
		}
		
	 }
	 XuatMang(x,n);
	}
}
int main(){
	float x[100];
	int n;
	NhapN(n);
	NhapB();
	
	NhapMang(x,n);
	XuatMang(x,n);
	cout<<"\n";
	
	ThemB(x,n);
	cout<<"\n";
	
	TBC(x,n);
	return 0;
}

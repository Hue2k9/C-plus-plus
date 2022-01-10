//2h22
#include <iostream>
#include <math.h>
using namespace std;
void Nhap(int &n, int &m){
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter m: ";
	cin>>m;
	if (n>m){
		int temp=n;
		    n=m;
		    m=temp;
	}
}
int Tinh(int n, int m){
	int sum=0;
	for(int i=n; i<=m; i++){
		if (i%3==0 && i%5==0)
		   sum+=i;
	}
	return sum;
}
double F(float x, int n){
	float f=2020*fabs(n*x);
	for(int i=1; i<=n; i++){
		f+=x/(2*n-i);
	}
	if (n>0)
	   return f;
	else
	return 1;
}
int main(){
	int n,m;
	float x;
	Nhap(n,m);
    cout<<"\nEnter x: ";
	cin>>x;
	cout<<"\nTong= "<<Tinh(n,m);
	cout<<"\nTong= "<<Tinh(1,n);
	cout<<"\nT= "<<F(x,m)-F(x,n);
	return 0;
}

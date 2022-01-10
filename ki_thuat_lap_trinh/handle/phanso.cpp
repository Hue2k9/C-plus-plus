#include<iostream>
#include<math.h>
using namespace std;
void Nhap(int &a, int &b){
	cin>>a;
	cin>>b;
}
int UCLN(int a, int b){
	if (a<0)
	   a=-a;
	if (b<0)
	   b=-b;
	if (a==0 || b==0)
	   return a + b;
	while (a !=b){
		if (a>b)
		   a=a-b;
		else
		   b=b-a;
	}
	return a;  // return a hoac b boi vi luc nay a,b bang nhau
}
void PhanSo(int a, int b){
	int k=UCLN(a,b);
	if ((a>0 && b>0) || (a<0 && b<0)){
		a=abs(a);
		b=abs(b);
		if (b != k )
		  cout<<a/k<<"/"<<b/k;
		else
		  cout<<a/k;
	}
	else {
		a=abs(a);
		b=abs(b);
		if (b !=k)
		  cout<<"-"<<a/k<<"/"<<b/k;
		else
		  cout<<"-"<<a/k;
	}
	
}
int main(){
	int a,b;
	Nhap(a,b);
	
	if (b==0)
	  return 0;
	if (a==0){
	   cout<<0;
	   return 0;
}
  
	else
	  PhanSo(a,b);
	return 0;
}

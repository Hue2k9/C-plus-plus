#include <iostream>
#include <math.h>
using namespace std;
//Chuyen 1 so ve nhi phan
/*  VD: n=30
  30/2=15  du  0
  15/2=7   du  1
  7/2=3    du  1
  3/2=1    du  1
  1/2=0    du  1
  => Nhi phan: 11110
*/
void Nhap(int &n){
	cin>>n;
}
void NhiPhan(int n){
	int z=0;
	int *a;
	a=new int[z];
	int k;
	while(n>0){
		k=n % 2;
		a[z]=k;
		n=n/2;
		z++;
	}
	for(int i=z-1; i>=0; i--)
	   cout<<a[i];
}

int main(){
	int n;
	Nhap(n);
	NhiPhan(n);
	return 0;
}

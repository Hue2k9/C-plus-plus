#include <iostream>
using namespace std;
void NhapN(int &n){
	cout<<"Nhap n= ";
	cin>>n;
}
void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void SapXep(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}

		}
	}
}
void Xoa(int *a, int &n, int vt){
	for(int i=vt; i<n; i++){
		a[i]=a[i+1];
	}
	n--;
}
void XoaLeAm(int a[], int &n){
	for(int i=0; i<n; i++){
		if (a[i] % 2 !=0 && a[i]<0)
		Xoa(a,n,i);
	}
}
void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	int a[100];
	NhapN(n);
	NhapMang(a,n);
	SapXep(a,n);
	XuatMang(a,n);
	cout<<"\n";
	XoaLeAm(a,n);
	XuatMang(a,n);
	return 0;
}

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void NhapMang(int *a, int n){
	for(int i=0; i<n; i++){ 
	   cout<<"a["<<i<<"]= ";
	   cin>>a[i];
	}
}
void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void WriteToFile( int *a, int n){
	ofstream f;
	f.open("ABC206.txt",ios::out);
	for(int i=0; i<n; i++){
		f<<a[i]<<" ";
	}
	f.close();
}

void SapXep(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j])
			  {
			  	swap(a[i],a[j]);
			  }
		}
	}
}
void VietThem( int *a, int n){
	ofstream b;
	b.open("ABC206.txt",ios::app);
	b<<"\n";
	for(int i=0; i<n; i++){
		b<<a[i]<<" ";
	}
	b.close();
}
void Tong(int *a, int n){
	int x;
	cout<<"\nEnter x: ";
	cin>>x;
	int count=0;
	cout<<"\nCac so co TTD<x: ";
	for(int i=0; i<n; i++){
		if (abs(a[i])<x){
		   cout<<a[i]<<" ";
		   count+=a[i];
	  }
	}
	cout<<"\ntong cac so co TTD<x: "<<count;
}
void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
	   a[i]=a[i+1];
	   n--;
}
void DelMax(int *a, int &n){
	int max=a[0];
	for(int i=1; i<n; i++){
		if (a[i]>max)
		   max=a[i];
	}
	for(int i=0; i<n; i++){
		if (a[i]==max){
		   Del(a,n,i);
		   i--;
	 }
	}
	cout<<"\nMang sau khi xoa: ";
	XuatMang(a,n);
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int *a;
	a=new int[n];
	NhapMang(a,n);
	XuatMang(a,n);
	WriteToFile(a,n);
	
	SapXep(a,n);
	VietThem(a,n);
	
	Tong(a,n);
	DelMax(a,n);
	delete [] a;
	return 0;
}

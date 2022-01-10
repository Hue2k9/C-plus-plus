#include<iostream>
using namespace std;
void InputArr(int *&a, int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}
void OutputArr(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void Sort(int *a, int n){
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
void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
	  a[i]=a[i+1];
	  n--;
}
void XoaLeAm(int *&a, int &n){
	for(int i=0; i<n; i++){
		if (a[i]<0){
			Del(a,n,i);
			i--;
		}
	}
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int *a= new int [n];
	InputArr(a,n);
	cout<<"Mang vua nhap la: "<<endl;
	OutputArr(a,n);
	cout<<"Mang sau khi sap xep: "<<endl;
	Sort(a,n);
	OutputArr(a,n);
	cout<<"Mang sau khi xoa le am: "<<endl;
	XoaLeAm(a,n);
	OutputArr(a,n);
	return 0;
}

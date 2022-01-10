#include<iostream>
using namespace std;
//Them b vao sau cac phan tu chia het cho 2 trong mang
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
void Insert(int *a, int &n, int vt, int x){
	for(int i=n; i>=vt; i--)
	  a[i]=a[i-1];
	  a[vt]=x;
	  n++;
}
void InsertB(int *&a, int &n){
	int b;
	cout<<"Nhap b: ";
	cin>>b;
	for(int i=0; i<n; i++){
		if (a[i]%2==0){
			Insert(a,n,i+1,b);
			i++;
		}
	}
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int *a=new int[n];
	InputArr(a,n);
	cout<<"Mang vua chen la: "<<endl;
	OutputArr(a,n);
	InsertB(a,n);
	cout<<"Mang sau khi chen b: ";
	OutputArr(a,n);
	return 0;
}



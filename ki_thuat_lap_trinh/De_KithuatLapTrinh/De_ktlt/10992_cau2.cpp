#include <iostream>
#include <fstream>
using namespace std;
void InputArr(int *&a, int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void OutputArr(int *a, int n){
	for(int i=0; i<n; i++)
	   cout<<a[i]<<" ";
}
void WriteToFile(const char *name, int *a, int n){
	ofstream f;
	f.open(name,ios::out);
	for(int i=0; i<n; i++)
	  f<<a[i]<<" ";
	f.close();
}
void Sort(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j])
			  swap(a[i],a[j]);
		}
	}
	WriteToFile("XYZ2014.TXT",a,n);
}
void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
	   a[i]=a[i+1];
	   n--;
}
void XoaChan(int *a, int &n){
	for(int i=0; i<n; i++){
		if (a[i]%2==0){
			Del(a,n,i);
			i--;
		}
	}
	cout<<"\nMang sau khi xoa la: ";
	OutputArr(a,n);
}
void Insert(int *a, int &n, int vt,int x){
	for(int i=n; i>=vt; i--)
		a[i]=a[i-1];
		a[vt]=x;
		n++;
}
void Copy(int *a, int &n){
	int vt=0;
	for(int i=0; i<n; i++){
		if (a[i]<0){
			Insert(a,n,vt,a[i]);
			vt++;
			i++;
		}
	}
	cout<<"\nMang sau khi sao chep la: ";
	OutputArr(a,n);
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int *a;
	a=new int [n];
	InputArr(a,n);
	OutputArr(a,n);
	WriteToFile("ABC2014.TXT",a,n);
	Sort(a,n);
	XoaChan(a,n);
	Copy(a,n);
	delete [] a;
	return 0;
}

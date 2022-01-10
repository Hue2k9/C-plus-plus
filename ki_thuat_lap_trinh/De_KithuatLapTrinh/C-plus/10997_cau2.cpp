#include<iostream>
#include <fstream>
#include <malloc.h>
#include <math.h>
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
	ofstream file;
	file.open(name,ios::out);
		for(int i=0; i<n; i++){
		file<<a[i]<<" ";
	}
	file.close();
}
void Sort(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				//  swap(a[i],a[j]);
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
}
void Tach(int *a, int n){
	int x=0,y=0;
	int *b=new int [x];
	int *c=new int [y];
	for(int i=0; i<n; i++){
		if (a[i]%2!=0){
			b[x]=a[i];
			x++;
		}
		else{
			c[y]=a[i];
			y++;
		}
	}
	cout<<"\nMang b: ";
	OutputArr(b,x);
	cout<<"\nMang c: ";
	OutputArr(c,y);
}
void Check(int *a, int n){
	for(int i = 0 ; i < n; i++){
		if(a[i] % 2 != 0){
			cout << "khum hop le ";
			return;
		}
		if(i < n - 1){
			if(a[i] == a[i+1] && a[i] == a[i+2]){
				cout << "khum hop le ";
				return;
			}
 		}
	}
	cout << "hop le";
}
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int *a;
	a=new int [n];
	InputArr(a,n);
	OutputArr(a,n);
	WriteToFile("ABC2007.txt",a,n);
	Sort(a,n);
	WriteToFile("XYZ2007.txt",a,n);
	Tach(a,n);
	Check(a,n);
	delete [] a;
	return 0;
}

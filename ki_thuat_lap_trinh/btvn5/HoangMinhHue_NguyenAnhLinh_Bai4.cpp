#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=1 || n>30)
		  cout<<"Enter n again: "<<endl;
	} while (n<=1 || n>30);
}

void Input(int *&a, int n){
	a=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
}

void Output(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}

void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
		a[i]=a[i+1];
		n--;
	a=(int *)malloc(n*sizeof(int));
}

void XoaChan(int *a, int &n){
	for(int i=0; i<n; i++){
		if (a[i] % 2==0){
		   Del(a,n,i);
		   i--;
	   }
	}
	a=(int *)malloc(n*sizeof(int));
}

void Sort(int *&a, int n, int *b, int z){
	b=(int *)malloc(z*sizeof(int));
	z=0;
	for(int i=0; i<n; i++){
		if (a[i]<0){
			b[z]=a[i];
			z++;
		}
	}
	for(int i=0; i<n; i++){
		if (a[i]>0){
			b[z]=a[i];
			z++;
		}
	}
	for(int i=0; i<z; i++){
		a[i]=b[i];
	}	
}

int main(){
    int *a,n,*b,z;
	EnterN(n);
	Input(a,n);
	XoaChan(a,n);
	Sort(a,n,b,z);
	cout<<"Hien thi mang\n";
	Output(a,n);
	free(a);
	free(b);
	return 0;
}

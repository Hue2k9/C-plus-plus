#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
void InputArr(int *&a, int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void OutputArr(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
void WriteToFile(const char *name, int *a, int n){
	ofstream file;
	file.open(name,ios::app);
	for(int i=0; i<n; i++)
	  file<<a[i]<<" ";
	file<<endl;
	file.close();
}
void Sort(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]<a[j])
			  swap(a[i],a[j]);
		}
	}
	WriteToFile("ABC2018.TXT",a,n);
}
void TimDuongMin(int *a, int n){
	int min,count=0;
	for(int i=0; i<n; i++){
		if (a[i]>0){
			min=a[i];
			count++;
		}
	}
	for(int i=0; i<n; i++){
		if (a[i]<min){
			min=a[i];
		}
	}
	if (count>0)
	   cout<<"\nmin= "<<min;
	else
	   cout<<"\nDay khong co phan tu duong nao";
}
void HopLe(int *a, int n){
	int count1=0,count2=0;
	for(int i=0; i<n; i++){
		if(a[i]>0)
		  count1++;
	}
	for(int i=0; i<n-1; i++){
		if (a[i]+a[i+1]>5)
		   count2++;
	}
	if (count1==n && count2==n-1)
	   cout<<"\nDay hop le";
	else
	   cout<<"\nDau khong hop le";
}
int main(){
	int n;
	do{
		cout<<"Enter n: ";
		cin>>n;
	} while(n<=0);
	int *a;
	a=new int [n];
	
	InputArr(a,n);
	OutputArr(a,n);
	WriteToFile("ABC2018.TXT",a,n);
	
	Sort(a,n);
	TimDuongMin(a,n);
	HopLe(a,n);
	delete [] a;
	return 0;
}

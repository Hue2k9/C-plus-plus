#include <iostream>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=1 || n>40)
		  cout<<"Enter n again \n";
	} while (n<=1 || n>40);
}
void InputArr(int *&a, int n){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void Sort(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i] > a[j]){
			   int tmp=a[i];
			       a[i]=a[j];
			       a[j]=tmp;
		   }
		}
	}
}
void WriteFile(int a, int n){
	ostream ghi;
	ghi.open("C:\\Users\\Admin\\Desktop\\ABC01.txt", ios::out);
	for(int i=0; i<n; i++){
		ghi<<a[i]<<" ";
	}
}
int main(){
	int n;
	int *a;
	a= new int[n];
	EnterN(n);
	InputArr(a,n);
	WriteFile(a,n);
	Sort(a,n);
	WriteFile(a,n);
	
	return 0;
}

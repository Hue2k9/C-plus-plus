#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
void InputArr(int *&a, int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=1 || n>40)
		  cout<<"Enter n again \n";
	} while (n<=1 || n>40);
	
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	
}
void WriteFile(int *a, int n){
	 ofstream hi;  //khai bao bien mo de ghi du lieu
	 hi.open("ABC01.txt",ios::out); //mo file
	
	// ghi file. Mang ban dau
	for(int i=0; i<n; i++){
		hi<<a[i]<<" ";
	}
	//Xep tang dan va ghi du lieu
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j]){
			   int tmp=a[i];
			       a[i]=a[j];
			       a[j]=tmp;
		   }
		}
	}
	hi<<"\n"; 
	for(int i=0; i<n; i++){
		hi<<a[i]<<" "; // ghi du lieu
	}
	
	//Dong file
	hi.close();
}
void ReadFile(int *a, int n){
	ifstream hi;
	hi.open("ABC01.txt", ios::in);
	string line;
	while (!hi.eof()){
		getline(hi,line);
		cout<<line<<endl;
	}
	hi.close();
}
int main(){
	int *a,n;
	a=new int[20];
	InputArr(a,n);
	WriteFile(a,n);
	ReadFile(a,n);
	
	delete [] a;
	return 0;
}

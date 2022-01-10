#include <iostream>
#include <fstream>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if(n<1 || n>=40)
		  cout<<"Enter n again: ";
	} while (n<1 || n>=40);
}

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

void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
	   a[i]=a[i+1];
	   n--;
}

void DelMax(int *a, int &n, int &count){
	int max=a[0];
	count=0;
	for(int i=1; i<n; i++){
		if (a[i]>max)
		   max=a[i];
	}
	for(int i=0; i<n; i++){
		if (a[i]==max){
			Del(a,n,i);
			count++;
			i--;
		}
	}
}

void WriteFile(int *a, int n, int count){
	ofstream f;
	f.open("C:\\Users\\Admin\\Desktop\\ABC03.txt",ios::out);
	for(int i=0; i<n; i++){
		f<<a[i]<<" ";
	}
	f<<"\nSo phan tu da xoa la "<<count<<" phan tu";
	f.close();
}

void ReadFile(int *a, int n){
	ifstream f;
	f.open("C:\\Users\\Admin\\Desktop\\ABC03.txt",ios::in);
	string line;
	while (!f.eof()){
		getline(f,line);
		cout<<line<<endl;
	}
	f.close();
}

int main(){
	int *a;
	int n,count;
	a=new int [n];
	EnterN(n);
	InputArr(a,n);
	DelMax(a,n,count);
	WriteFile(a,n,count);
	ReadFile(a,n);
	
	delete [] a;
	return 0;
}

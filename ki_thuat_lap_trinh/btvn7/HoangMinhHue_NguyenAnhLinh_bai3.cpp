#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=1 || n>=40)
		  cout<<"Enter n again: \n";
	} while (n<=1 || n>=40);
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

void Replace(int *&a, int n){
	//tim tbc cac so chan
	int sum=0;
	int count=0;
	float k;
	for(int i=0; i<n; i++){
		if (a[i] % 2 ==0){
			sum+=a[i];
			count++;
		}
	}
	k=(float)sum/count;
	//Thay the
	for(int i=0; i<n; i++){
		if (a[i] < (int)k){
			a[i]=(int)k;
		}
	}
}

void WriteFile(int *a, int n){
	ofstream hi;
	hi.open("C:\\Users\\Admin\\Desktop\\ABC02.txt",ios::out);	
	for(int i=0; i<n; i++){
		hi<<a[i]<<" ";
	}
	
	hi.close();
}
void ReadFile(int *a, int n){
	ifstream hi;
	hi.open("C:\\Users\\Admin\\Desktop\\ABC02.txt",ios::in);
	string line;
	while(!hi.eof())	
	{
		getline(hi,line);
		cout<<line<<endl;
	}
	hi.close();
}
int main(){
	int *a;
//	char filename;
	a=new int[10];
	int n;
	EnterN(n);
	InputArr(a,n);
	Replace(a,n);
	WriteFile(a,n);
    ReadFile(a,n);
	delete [] a;
	return 0;
}

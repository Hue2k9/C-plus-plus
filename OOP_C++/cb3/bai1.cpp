#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class ARRAY{
	private:
		int *value;
		int n;
	public:
		ARRAY();
		ARRAY(int *value, int n);
		~ARRAY(){
			n=0;
			delete [] value;
		}
		void Nhap();
		void Xuat();
};
ARRAY::ARRAY(){
	n=0;
}
ARRAY::ARRAY(int *a, int n){
	this->n=n;
	value=new int[n];
	for(int i=0; i<n; i++)
	  this->value[i]=0;
}

void ARRAY::Nhap(){
	cout << "nhap n: ";
	cin >> n;
	value=new int[n];
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>value[i];
	}
}
void ARRAY::Xuat(){
	for(int i=0; i<n; i++)
	   cout<<value[i]<<" ";
}
int main(){
	int *number = new int [4]{1,2,3,5};
	ARRAY a(number,4);
	a.Xuat();
	
	ARRAY b;
	b.Nhap();
	b.Xuat();
	return 0;
}

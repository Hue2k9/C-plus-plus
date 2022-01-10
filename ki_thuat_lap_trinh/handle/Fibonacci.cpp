#include<iostream>
using namespace std;
void Nhap(int &n){
	cin>>n;
}
// in ra n so fibonacci
/*
void Fibonacci(int n){
	long long int k=2,i=3,k1=1,k2=1,k3;
	if (n==1 )
	  cout<<1<<" ";
	if (n==2)
	  cout<<1<<" "<<1;
	if (n>2)
	  cout<<1<<" "<<1<<" ";
	while (i<=n){
		k3=k1+k2;
		cout<<k3<<" ";
		k1=k2;
		k2=k3;
		i++;
	}
}
*/
// Tim so Fibonacci thu n

int Fibonacci(int n){
	if (n==0 || n==1)
	   return 1;
	int i=3,k3,k1=1,k2=1;
	while(i<=n){
		k3=k1+k2;
		k1=k2;
		k2=k3;
		i++;
	}
	return k3;
}

/*
//Tim so Fibonacci thu n
int Fibonacci(int n){
	if (n==1 || n==2)
	   return 1;
	return Fibonacci(n-1) + Fibonacci(n-2);
}
*/

/* in ra man hinh các so fibonacci den so n
void Fibonacci(int n){
	if (n==1)
	  cout<<1<<" ";
	if (n==2)
	  cout<<2<<" ";
	int k1=1, k2=1, k3;
	while(k1+k2<=n){
		k3=k1+k2;
		cout<<k3<<" ";
		k1=k2;
		k2=k3;
	}
}
*/
//Cach khac: dung mang
int main(){
	int n;
	Nhap(n);
	cout<<Fibonacci(n);
	return 0;
}

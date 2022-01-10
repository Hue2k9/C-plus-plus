#include<iostream>
using namespace std;
// In ra man hinh so Fibonacci thu n, n chay tu 0
void EnterN(int &n){
	cin>>n;
	n+=1;
}
void InputArr(int *&a, int n){
	a[0]=1;
	a[1]=1;
	for(int i=2; i<n; i++){
		a[i]=a[i-1]+a[i-2];
	}
	if (n>1)
	  cout<<a[n-1];
	else
	  cout<<1;
}
int main(){
	int n,*a;
	EnterN(n);
	a=new int[n];
	InputArr(a,n);
	delete [] a;
	return 0;
}

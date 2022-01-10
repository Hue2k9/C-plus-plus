#include<iostream>
#include<math.h>
using namespace std;
// n=5
// thu 0,1,2,4,5,6
void NhapN(int &n){
	do{
		cin>>n;
	} while(n<0 || n>50);
	n+=1;
}
int Fibonacci(int n){
 /*Cach1: dung mang
	int *a;
	a=new int[n];
	a[0]=1;
	a[1]=1;
	if (n==0 || n==1)
	   return 1;
	for(int i=2; i<n; i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n-1];
	*/
	//Cach 2:
	int k1=1,k2=1,k3;
	if (n==1  || n==0)
	   return 1;
	int i=2;
	while (i<n){
		k3=k1+k2;
		k1=k2;
		k2=k3;
		i++;
	}
	return k3;
}
void NhiPhan(int n){
	int x=Fibonacci(n);
	int k,z=0;
	int *a;
	a=new int[z];
	while(x>0){
		k=x%2;
		a[z]=k;
		x/=2;
		z++;
	}
	for(int i=z-1; i>=0; i--)
	   cout<<a[i];
}
int main(){
	int n;
	NhapN(n);
	NhiPhan(n);
	return 0;
}

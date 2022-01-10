#include <iostream>
#include <math.h>
using namespace std;
int GiaiThua(int n){
	if (n==1)
	   return 1;
	return n*GiaiThua(n-1);
}
double P(float x, int n){
	
	double p, p1=2020*exp(fabs(x));
	double mu=1,sum=0;
	for(int i=1; i<=n+1; i++){
		mu*=x;
		sum+=mu;
	}
	p=(1.0/GiaiThua(n)) * (p1+sum);
	return p;
}
double K(int x, int n, int m){
	return (P(x,n)+P(x,m))/P(x,n+m);
}
double Q(int x, int n,int m){
	return K(x,n,m)+P(x,n)+P(x,m);
}
int main(){
	int n;
	float x;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"\nEnter x: ";
	cin>>x;
	int m;
	cout<<"\nEnter m: ";
	cin>>m;
	cout<<"\nP= "<<P(x,n);
	cout<<"\nK= "<<K(x,n,m);
	cout<<"\nQ= "<<Q(x,n,m);
	return 0;
}

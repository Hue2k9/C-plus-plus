#include <iostream>
#include <math.h>
using namespace std;

int Tang(int &a){
	a=a+1;
	return a;
}

double P(int n, double x){
	double x;
	double p=2020*exp(x)+1;
	int t;
	for(int i=1; i<=n; i++){
		t=i*3;
		p+=t;
	}
	return p;
}
double S(double x, int n){
	if (n>2){
		double s=sqrt(2019),mu=1;
		for(int i=1; i<=n; i++){
			mu*=(x+1);
			s+=mu;
		}
		
		return s;
	}
	
	else{
		return fabs(n*x);
	}
}
int main(){
	
	double x;
	int n;
	cout<<"\nEnter x: ";
	cin>>x;
	cout<<"\nEnter n: ";
	cin>>n;
	Tang(n);
	Tang(n);
	Tang(n);
	cout<<"\nn= "<<n;
	cout<<"\nP= "<<P(n);
	cout<<"\nS= "<<S(x,n);
	cout<<"\nS(x,n)/P(n)= "<<S(x,n)/P(n);
	return 0;
}

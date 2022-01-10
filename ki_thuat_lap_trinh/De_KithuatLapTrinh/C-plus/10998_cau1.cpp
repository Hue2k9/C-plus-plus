#include <iostream>
#include <math.h>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=0)
		  cout<<"Enter n again: \n";
	} while(n<=0);
}
int F(int n){
	int f=1;
	for(int i=1; i<=(2*n-1); i+=2){
		f*=i;
	}
	return f;
}
double P(float x, int n){
	double p=fabs(x);
	for(int i=2; i<=n; i++){
		p+=(float)i/F(i);
	}
	return p;
}
int main(){
	int n;
	EnterN(n);
	float x;
	cout<<"\nEnter x: ";
	cin>>x;
//	cout<<"F(n)= "<<F(n)<<endl;
//	cout<<"P(x,n)= "<<P(x,n)<<endl;
	cout<<"P(x,2n)= "<<P(x,2*n)<<endl;
	return 0;
}

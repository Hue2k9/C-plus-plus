#include <iostream>
#include <math.h>
using namespace std;
void Nhap(double &x, double &y){
	do{
		cout<<"Enter x: ";
		cin>>x;
		cout<<"\nEnter y: ";
		cin>>y;
		if (x>=y)
		  cout<<"\nEnter x,y agian\n";
	} while (x>=y);
}
double P(double x, double y){
	if (x<y)
	   return exp(x)+fabs(y)+sqrt(y-x);
	if (x>=y)
	   return 1;
}
int Mu(int a, int b){
	//x^n
	if (b==0)
	   return 1;
	if (b==1)
	   return a;
	return a*Mu(a,b-1);
}
double F(double x, int n){

	double f=2020*x;
	double tu=x;
	int mau;
	for(int i=2; i<=n; i++){
		tu*=x;
		mau=Mu(i,i);
		f+=(double)tu/mau;
	}
	return f;
}
int main(){
	double x,y;
	Nhap(x,y);
	int m;
	do{
		cout<<"\nEnter m: ";
		cin>>m;
		if (m<=0)
		cout<<"Enter m again\n";
	} while(m<=0);
	
	cout<<"\nP(x,y)= "<<P(x,y);
	cout<<"\nF(x+y,m)= "<<F(x+y,m);
	return 0;
}

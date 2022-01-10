#include <iostream>
#include <math.h>
using namespace std;
void Nhap(int &a, int &b){
	cin>>a;
	cin>>b;
}
// Great common divisor
int GCD(int a, int b){
	if (a==0 || b==0)
	   return a+b;
	while (a!=b){
		if (a>b)
		  a-=b;
		else
		  b-=a;
	}
	return a;
}
int main(){
	int a,b;
	Nhap(a,b);
	GCD(a,b);
	return 0;
}

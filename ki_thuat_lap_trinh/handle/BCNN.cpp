#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
//LCM: least common multiple
void Nhap(int &a, int &b){
	cin>>a;
	cin>>b;
}
/*  Cach 1: i chay tu 1
int BCNN(int a, int b){
	int k;
	for(int i=2; i<=a*b; i++){
		if (i%a==0 && i%b==0){
			k=i;
			break;
		} 
	}
	return k;
}
*/
//Cach 2:  i chay tu max trong 2 so

int BCNN(int a, int b){
	int k;
	int max=std::max(a,b);
	for (int i=max; i<=a*b; i++){
		if (i%a==0 && i%b==0){
			k=i;
			break;
		}
	}
	return k;
}

//Cach 3: bcnn=(a*b)/UCLN(a,b);
/*
int LCD(int a, int b){
	if (a==0 || b==0)
	   return a+b;
	while(a!=b){
		if (a>b)
		  a-=b;
		else
		  b-=a;
	}
	return a;  //luc nay 2 so a va b bang nhau
}
int BCNN(int a, int b){
	return (a*b)/LCD(a,b);
}
*/

int main(){
	int a,b;
	Nhap(a,b);
	cout<<BCNN(a,b);
	return 0;
}

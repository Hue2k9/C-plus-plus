#include<iostream>
#include<math.h>
using namespace std;

void SoNguyenTo_Cach1(){
	int n,sum=0;
    do{
    	cin>>n;
	} while(n<=0);
	
	for(int i=2; i<=sqrt(n); i++){
		if (n%i==0)
		   sum++;
	}
	if (sum==0 && n>1)
	   cout<<"Yes";
	else
	   cout<<"No";
}
//Cach2:
bool CheckSNT(int a){
	if (a<=1)
	  return 0;
	for(int i=2; i<=sqrt(a); i++)
		if (a%i==0)
		  return 0;
	return 1;
}
void SoNguyenTo_Cach2(){
	int n;
	do{
		cin>>n;
	} while(n<=0);
	if (CheckSNT(n)==1)
	  cout<<"Yes";
	else
	  cout<<"No";
}

int main(){
	SoNguyenTo_Cach1();
	SoNguyenTo_Cach2();
	return 0;
}

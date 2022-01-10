#include<iostream>
using namespace std;
int main(){
	int n,m,k;
	do{
		cout<<"n= ";
		cin>>n;
	} while(n<1 || n>10000);

	do{
		cout<<"m= ";
		cin>>m;
	} while(m<1 || m>1000);
	do{
		cout<<"k= ";
		cin>>k;
	} while(k<1 || k>1000);
	
	//TinhTong cua n
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	//Tim chu so dau tien cua m
	int cs;
	while(m>0){
		cs=m;
		m/=10;
	}
	//Check
	if (sum+cs==k)
	   cout<<"Yes";
	else
	   cout<<"No";
	return 0;
}

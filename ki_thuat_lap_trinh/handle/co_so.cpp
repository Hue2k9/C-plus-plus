#include <iostream>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Nhap so nguyen duong N: ";
		cin>>n;
		
	} while(n<=0 || n>100000);
}

void EnterB(int &b){
	do{
		cout<<"\nNhap co so b: ";
		cin>>b;
	} while(b<2 || b>36);
}
char ChuyenThanhChu(int k, char x){
	if (k==0)
	    x='0';
	if (k==1)
	    x='1';
	if (k==2)
	    x='2';
    if (k==3)
	    x='3';
    if (k==4)
	    x='4';
	if (k==5)
	    x='5';
	if (k==6)
	    x='6';
	if (k==7)
	    x='7';
	if (k==8)
	    x='8';
	if (k==9)
	    x='9'; 
	if (k==10)
		x='A';
    if (k==11)
	    x='B';
	if (k==12)
		x='C';
	if (k==13)
	    x='D';
	if (k==14)
		x='E';
	if (k==15)
	    x='F';
	if (k==16)
		x='G';
	if (k==17)
	    x='H';
	if (k==18)
		x='I';
	if (k==19)
	    x='J';
	if (k==20)
		x='K';
	if (k==21)
	    x='L';
	if (k==22)
		x='M';
	if (k==23)
	    x='N';
	if (k==24)
		x='O';
	if (k==25)
	    x='P';
	if (k==26)
		x='Q';
	if (k==27)
	    x='R';
	if (k==28)
		x='S';
	if (k==29)
	    x='T';
	if (k==30)
		x='U';
	if (k==31)
	    x='V';
	if (k==32)
		x='W';
	if (k==33)
	    x='X';
	if (k==34)
		x='Y';
	if (k==35)
	    x='Z';
	
	return x;
}
void Chuyen(int n, int b){
	int z=0;
	char *a,x;
	a=new char[z];
	int k;
	while(n>=1){
		k=n % b;
		a[z]=ChuyenThanhChu(k,x);
		n=n/b;
		z++;
	}
	for(int i=z-1; i>=0; i--)
	   cout<<a[i];
}
int main(){
	int n,b;
	
	EnterN(n);
	EnterB(b);
	Chuyen(n,b);
	return 0;
}


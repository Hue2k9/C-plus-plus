#include<iostream>
#include<string>
using namespace std;
struct Hoten{
	char s[50];
	void nhap(){
		cout<<"Nhap ho ten: ";
		fflush(stdin);
		fgets(s,sizeof(s),stdin);
	}
	void xuat(){
		cout<<s;
  }
};
int main(){
	int n;
	Hoten *sv=new Hoten[n];
	do{
		cout<<"Nhap n: ";
		cin>>n;
	} while(n<=0);
	for(int i=0; i<n; i++){
		sv[i].nhap();
	}
    for(int i=0; i<n; i++){
    	sv[i].xuat();
	}
	return 0;
}

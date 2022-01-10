#include <iostream>
using namespace std;
int main(){
	int n,m,x,y;
	cout<<"Nhap n= ";
	cin>>n;
	cout<<"\nNhap m= ";
	cin>>m;
	cout<<"\nNhap x= ";
	cin>>x;
	cout<<"\nNhap y= ";
	cin>>y;
	
	if (n>m){
	   cout<<"Co "<< n <<" con cho" << endl;
    }
	else{
	   cout<<"Co "<< m <<" con meo" <<endl;
    }
    
	if (x>y){
	   cout<<"gau gau "<< x <<" lan" <<endl;
    }
	else{
	   cout<<"meo meo "<< y <<" lan" <<endl;
    }
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	do{
		cout<<"Nhap a= ";
		cin>>a;
	} while (a<=0);
	do{
		cout<<"Nhap b= ";
		cin>>b;
	} while (b<=0);
	// cout<<setprecisicon(n)<< fixed<< ten bien;
	std::cout<< std::setprecision(2)<< fixed<< a+b <<endl;
	std::cout<< std::setprecision(2)<< fixed<< a-b <<endl;
	std::cout<< std::setprecision(2)<< fixed<< a*b <<endl;
	std::cout<< std::setprecision(2)<< fixed<< a/b <<endl;
	std::cout<< std::setprecision(2)<< fixed<< a%b <<endl;
	
	return 0;
}

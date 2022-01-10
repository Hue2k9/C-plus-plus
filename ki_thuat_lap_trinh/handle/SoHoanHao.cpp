#include<iostream>
using namespace std;

void SoHoanHao_Cach1(){
	int sum=0;
	for(int i=2; i<10000; i++){
		for(int j=1; j<=i; j++){
			if (i % j==0)
			   sum+=j;
		}
		if (sum==2*i)
		   cout<<i<<" ";
		sum=0;
	}
}

int SoHoanHao_Cach2(int a){
	int sum=0;
	for(int i=1; i<=a; i++)
	   if (a % i==0)
	     sum+=i;
    if (sum==2*a)
       return 1;
    return 0;
}
int main(){
	SoHoanHao_Cach1();
	cout<<endl;
	for(int i=2; i<=10000; i++){
		if (SoHoanHao_Cach2(i)==1)
		   cout<<i<<" ";
	}
	return 0;
}

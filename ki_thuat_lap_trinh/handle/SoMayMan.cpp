#include<iostream>
#include<math.h>
using namespace std;
bool Check(int n){
	int k,count=0,chuso=0;
	if (n==0)
	   return 0;
	while(n>0){
		k=n%10;
		if (k==4 || k==7)
		   count++;
		n/=10;
		chuso++;
	}
	if (count==chuso )
	   return 1;
	return 0;
}
int main(){
	int n;
	do{
		cin>>n;
	} while(n<=0 || n>10000);
	for(int i=0; i<n; i++){
		if (Check(i)==1)
		   cout<<i<<" ";
	}
	return 0;
}

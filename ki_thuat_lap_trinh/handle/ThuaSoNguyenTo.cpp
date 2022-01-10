#include <iostream>
using namespace std;
/*Tim tong cac thua so nguyen to
int solve(int n){
	int k=2,sum=0;
	while(n>1){
		while(n%k==0){
			sum+=k;
			n/=k;
		}
		k++;
	}
	return sum;
*/
int main(){
	int n,count;

	cin>>n;
	for(int i=2; i<=n; i++){
		count=0;
		while(n%i==0){
			count++;
			n/=i;
		}
		if (count!=0){
			
		if (count>1 )
			cout<<i<<"^"<<count;
		else if(count==1)
		    cout<<i;
		if (n>i)
		    cout<<" * ";
		    
	  }
	}
	return 0;
}

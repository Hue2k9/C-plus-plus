#include <iostream>
#include <malloc.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

void EnterN(int &n){
	do{
	cout<<"Enter n: ";
	cin>>n;
	if(n<=2 || n>=50)
	  cout<<"Enter n again: "<<endl;
   } while (n<=2 || n>=50);
}

void InputArr(int *&a, int &n){
   
	a= (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
}

void OutputArr(int *a, int n){
	for(int i=0; i<n; i++)
	   cout<<*(a+i)<<" ";
}

void IncreaseArr(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]>a[j]){
			   int temp=a[i];
			       a[i]=a[j];
			       a[j]=temp;
			   }
		}
	}
}

bool CheckSum(int number){
	int k,sum=0;
	if (number<0){
		number*=-1;
	}
	while(number>0){
		k=number%10;
		sum+=k;
		number=number/10;
    }
	for(int i=2; i<=sqrt(sum); i++)
		if (sum % i ==0)
		   return false;
	return sum>1;
}

void Del(int *a, int &n, int vt){
	for(int i=vt; i<n; i++)
		a[i]=a[i+1];
		n--;
	a= (int*)malloc(n*sizeof(int));
}

void DelElement(int *&a, int &n){
	for(int j=0; j<n; j++){
		if (CheckSum(a[j])){
		   Del(a,n,j);
		   j--;
	   }
	}
}

int main(){
	int n;
	int *a;
	EnterN(n);
	InputArr(a,n);
	IncreaseArr(a,n);
	DelElement(a,n);
	printf("\n");
	OutputArr(a,n);
    free(a);
	return 0;
}

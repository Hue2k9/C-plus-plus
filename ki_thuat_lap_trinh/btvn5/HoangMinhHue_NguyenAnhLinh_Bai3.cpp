#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;
void EnterN(int &n){
	do{
		cout<<"Enter n: ";
		cin>>n;
		if (n<=2 || n>=50)
		  cout<<"Enter n again: "<<endl;
	} while (n<=2 || n>=50);
}

void Input(int *&a, int n){
	a=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
}
void Output(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}

bool Check(int number){
	if ( number >= 0 && number <=9)
        return true;       
    while ( number >= 10)
    {
        if  ( (number % 10) !=  (number %100)/10 + 1)
            return false;
        number /= 10;
    }
    return true;
}

void ArrB(int *a, int n, int *&b, int &x){
	

	b=(int *)malloc(x*sizeof(int));
	x=0;
	for(int i=0; i<n; i++){
		int temp=*(a+i);
		if (Check(temp)){ 
		   b[x]=temp;
			x++;
		}
	}
}

int main(){
	int *a, *b;
	int n,x;
	EnterN(n);
	Input(a,n);
	ArrB(a,n,b,x);
	Output(b,x);
	free(a);
	free(b);
	return 0;
}

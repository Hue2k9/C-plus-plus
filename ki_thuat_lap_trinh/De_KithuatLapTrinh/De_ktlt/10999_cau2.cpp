#include <iostream>
#include <math.h>
#include <fstream>
#include <malloc.h>
using namespace std;
void InputArr(float *&a, int n,float *&b){
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>*(a+i);
	}
	b=new float[n];
	for(int i=0; i<n; i++){
		b[i]=a[i];
	}
}
void OutputArr(float *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<" ";
	}
}
void WriteToFile(const char *name, float *a, int n){
	ofstream f;
	f.open(name,ios::app);
	for(int i=0; i<n; i++){
		f<<a[i]<<" ";
	}
	f<<endl;
	f.close();
}
/*
void Sort(float *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				//swap(a[i],a[j]);
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
	WriteToFile("ABC2017.txt",a,n);
}
*/
void Sort(float *a, int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = n - 1; j > i; j--)
            if(a[j - 1] < a[j]){
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
    WriteToFile("ABC2017.txt",a,n);
}

void TimMin(float *a, int n){
	float min=a[0],count=0;
	for(int i=1; i<n; i++){
		if (a[i]<min)
		  min=a[i];
	}
	for(int i=0; i<n; i++){
		if (a[i]==min)
		  count++;
	}
	cout<<"\nMin= "<<min;
	cout<<"\nCo "<<count<<" gia tri min trong day";
}
void Insert(float *a, int &n,int vt, int x){
	for(int i=n; i>=vt; i--)
	   a[i]=a[i-1];
	   a[vt]=x;
	   n++;
}
void InsertX(float *&b, int &n, float &x){
	cout<<"\nEnter x: ";
	cin>>x;
	int count=0;
	for(int i=0; i<n; i++){
		if (b[i]>x){
			count++;
		}	
	}
	if (count>0){
		for(int i=0; i<n; i++){
		if (b[i]>x){
			b = (float*)realloc(b, (n + 1)*sizeof(float));
			Insert(b,n,i+1,x);
			break;
		}	
	}
	cout<<"\nMang sau khi chen: \n";
	OutputArr(b,n);
  }
    else
       cout<<"\nKhong co gia tri nao lon hon x trong mang";
}
int main(){
	float *a,*b;
	int n;
	float x;
	cout<<"Enter n: ";
	cin>>n;
	a=new float[n];
	InputArr(a,n,b);
	OutputArr(a,n);
	WriteToFile("ABC2017.txt",a,n);
	Sort(a,n);
	TimMin(a,n);
	InsertX(b,n,x);
	delete [] a;
	delete [] b;
	return 0;
}

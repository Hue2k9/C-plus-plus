#include <stdio.h>
#include <math.h>
int n;
float x,y;
void Nhap(){
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<=5 || n>=30)
		  printf("Yeu cau nhap lai n\n");
	} while (n<=5 || n>=30);
	printf("\nNhap x: ");
	scanf("%f",&x);
	printf("\nNhap y: ");
	scanf("%f",&y);
}
void Tinh(){
	float k=sqrt(1001);
	int tu=1,i=1,dau;
	while(i<=n){
		if (i % 2 !=0){
		   dau=-1;
	  }
		else{
		   dau=1;
	  }
		 tu*=x;  
		k+=(float)((dau*tu)+y)/(3*i);
		i++;
  }
	printf("K= %f",k);
}
int main(){
	Nhap();
	Tinh();
	return 0;
}

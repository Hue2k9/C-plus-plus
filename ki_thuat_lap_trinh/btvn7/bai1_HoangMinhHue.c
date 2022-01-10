#include <stdio.h>
int n,a;
float x;
void NhapN(){
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<2 || n>15)
		  printf("Yeu cau nhap lai n\n");
	} while (n<2 || n>15);
}

void Nhap(){
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap x: ");
	scanf("%f",&x);
}

void Tinh(){
	int i=1;
	float y=0;
	float tu1=x*x*x*x,tu;
	int mau,dau=-1;
	while(i<=n){
		dau*=(-1);
		tu1=tu1*x;
		tu=dau*(a+tu1);
		mau=i*2;
		y=y+(float)tu/mau;
		i++;
	}
	printf("\nY= %f",y);
}
int main(){
	NhapN();
	Nhap();
	Tinh();
	return 0;
}

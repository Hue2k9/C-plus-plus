#include<stdio.h>
int n;
int a[30];
void NhapN(){
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<5 || n>30)
		  printf("Nhap lai n \n");
	}while (n<5 || n>30);
}
void NhapMang(){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
int Check(){
	int i,j;
	for(i=0; i<n; i++){
		for( j=i+1; j<n; j++){
			if (a[i]<a[j]){
				return 0;
			}
		}
	}
	return 1;
}
void TangDan(){
	int i,j;
	if (Check()==0){
	for( i=0; i<n; i++){
		for( j=i+1; j<n; j++){
			if (a[i]>a[j]){
				int temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
			}
		}
	}
  }
  printf("\nMang sau khi xep tang dan:\n");
  XuatMang();
}

void Them(int vt, int x){
	int i;
	for( i=n; i>=vt; i--)
		a[i]=a[i-1];
		a[vt]=x;
		n++;
}
void ChenLe(){
	int i;
	for( i=0; i<n; i++){
		if (a[i] % 2 !=0){
			Them(i+1,a[i]);
			break;
		}
	}
	printf("\nMang sau khi chen: \n");
	XuatMang();
}
void Xoa(int vt){
	int i;
	for(i=vt; i<n; i++)
		a[i]=a[i+1];
		n--;
}
void XoaAm(){
	int i=0;
	for( i=0; i<n; i++){
		if (a[i]<0 && i==2){
			Xoa(2);
			break;
		}
	}
	printf("\nHien thi mang sau khi xoa:\n ");
	XuatMang();
}
int main(){
	NhapN();
	NhapMang();
	printf("\nHien thi mang:\n ");
	XuatMang();
	TangDan();
	ChenLe();
	int i;
	for( i=0; i<n; i++){
		if (a[i]<0 && i==2){
		   XoaAm();
		   break;
	   }
		else{
			printf("\n Khong co so am xuat hien tai vi tri thu 3 trong mang");
			break;
		}
	}
	return 0;
}

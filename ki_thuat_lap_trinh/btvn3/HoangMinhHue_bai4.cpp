#include <iostream>
#include <string.h>
using namespace std;

void Input(char name[]){
	cout<<"Enter your name: ";
	gets(name);
}

void Output(char name[]){
	cout<<name;
}

void DelSpace(char name[], int vt){
	int i;
	for(i=vt; i<strlen(name)-1; i++)
	name[i]=name[i+1];
	name[strlen(name)-1]='\0';
}

void DelAllSpace(char name[]){
	// Xoa khoang trang o dau
	int i;
	for(i=0; i<strlen(name)-1; i++){
		while (name[0]==' ')
		DelSpace(name,0);
	}
	// Xoa khoang trang o giua va cuoi
	for(i=0; i<strlen(name)-1; i++){
		if (name[i]==' ' && name[i+1]==' ')
		DelSpace(name,i);
		i--;
	}
}

int main(){
	char name[100];
	Input(name);
	DelAllSpace(name);
	Output(name);
	return 0;
}

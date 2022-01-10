#include <iostream>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
void InputString(char *&s){
	cout<<"Enter string: ";
	gets(s);
}

void OutputString(char *s){
		cout<<s;
}

void Del(char *s, int vt){
	for(int i=vt; i<strlen(s)-1; i++)
	   s[i]=s[i+1];
	   s[strlen(s)-1]='\0';
	   s=(char *)malloc(strlen(s));
}

void XoaTrangVaSo(char *s){
	//Xoa khoang trang o dau
	for(int i=0; i<strlen(s); i++){
		while(s[0]==' '){
			Del(s,0);
		}
	}
	//Tong cac so
	int sum=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='0' && s[i]<='9'){
			sum+=((int)s[i]-48);
		}
	}
	// Xoa so
	for(int i=0; i<strlen(s); i++){
		if(s[i]>= '0' && s[i]<= '9'){
			Del(s,i);
		   i--;
		}
	}
	//Xoa khoang trang o giua
	for(int i=0; i<strlen(s); i++){
		if(s[i]==' ' && s[i+1]==' '){
			Del(s,i);
			i--;
		}
	}
	// Xoa khoang trang o cuoi
	int k=strlen(s);
	for(int i=k; i>=0; i--){
		if (s[k]==' ')
		    Del(s,k);
	}
	cout<<sum<<endl;
}

void ChargeChar(char *s){
	strlwr(s);
	s[0]-=32;
	for(int i=1; i<strlen(s)-1; i++){
		if (s[i]==' ' && s[i+1] !=' '){
			s[i+1]-=32;
		}
	}
}

int main(){
	char* s=NULL;
	s= new char[100];
	InputString(s);
	XoaTrangVaSo(s);
	ChargeChar(s);
	OutputString(s);
	delete [] s;
	return 0;
}

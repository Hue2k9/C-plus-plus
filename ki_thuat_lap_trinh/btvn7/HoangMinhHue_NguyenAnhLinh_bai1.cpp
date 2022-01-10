#include <iostream>
#include <stdlib.h>
using namespace std;
struct Student{
	char name[30];
	int age;
	float maths,physics,chemistry;
	void Nhap(){
			cout<<"Ten sv: ";
			fflush(stdin);
			gets(name);
			
			cout<<"Tuoi: ";
			fflush(stdin);
			cin>>age;
			
			cout<<"Diem toan,ly hoa: "; 
			fflush(stdin);
			cin>>maths>>physics>>chemistry;
	}
	void Xuat(){
		cout<<name<<", tuoi: "<<age<<", Diem tb: "<<(maths+physics+chemistry)/3;
	}
};

int main(){
	int n;
	do{
		cout<<"Nhap so luong sinh vien: ";
		cin>>n;
		if (n<2)
		   cout<<"Nhap lai so luong sinh vien\n";
	} while (n<2);
	Student *sv;
	sv=new Student[n];
	fflush(stdin);
	
	for(int i=0; i<n; i++){
		sv[i].Nhap();
		cout<<"\n";
	}
	
	for(int i=0; i<n; i++){
		sv[i].Xuat();
		cout<<"\n";
	}
	
	delete [] sv;
	return 0;
}

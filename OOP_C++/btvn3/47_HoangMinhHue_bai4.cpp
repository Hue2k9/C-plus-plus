#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class School{
	private:
		char name[50],date[50];
	friend class Faculty;
};
class Faculty{
    private:
    	char name[50],date[50];
    	School x;
    public:
    	void input(){
    		cout<<"\nName of School: ";
    		fflush(stdin);
    		fgets(x.name,sizeof(x.name),stdin);
    		cout<<"Date of school: ";
    		fflush(stdin);
    		gets(x.date);
    		
    		cout<<"Name of Faculty: ";
    		fflush(stdin);
    		fgets(name,sizeof(name),stdin);
    		cout<<"Date of school: ";
    		fflush(stdin);
    		gets(date);
		}
		void output(){
			cout<<"\nName of school: "<<x.name;
			cout<<"Date of school: "<<x.date;
			cout<<"\nName of Faculty: "<<name;
			cout<<"Date of Faculty: "<<date;
		}
	friend class Student;
};
class Student{
	private:
		char Class[20];
		double score;
		Faculty y;
	public:
		Student(){
			strcpy(this->Class,"");
			score=0;
		    strcpy(this->y.name,"");
		    strcpy(this->y.date,"");    
		}
		void input(){
			y.input();
			cout<<"Class: ";
			fflush(stdin);
			fgets(Class,sizeof(Class),stdin);
			cout<<"Score: ";
			fflush(stdin);
			cin>>score;
		}
		void output(){
			y.output();
			cout<<"\nClass: "<<Class;
			cout<<"Score: "<<score;
		}
};
int main(){
	int n;
	Student *s;
	s=new Student[n];
	cout<<"\nEnter n: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin sv thu "<<i+1;
		s[i].input();
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		cout<<"Thong tin sv thu "<<i+1;
		s[i].output();
		cout<<endl<<endl;
	}
	delete [] s;
	return 0;
}

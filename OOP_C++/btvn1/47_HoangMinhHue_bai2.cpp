#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		int studentCode,dayOfBirth,monthOfBirth,yearOfBirth;
		char fullName[100],gender,classification;
		double mediumScore;
		
		void getInformation();
		student displayInformation();
};
void student::getInformation(){
	cout<<"===Get information=== "<<endl;
	cout<<"Enter student code: "; cin>>studentCode;
	fflush(stdin);
	cout<<"Full name: "; fgets(fullName, sizeof(fullName), stdin);
	cout<<"Day of birth: "; cin>>dayOfBirth;
	cout<<"Month of birth: "; cin>>monthOfBirth;
	cout<<"Year of birth: "; cin>>yearOfBirth;
	fflush(stdin);
	cout<<"Gender: "; cin>>gender;
	fflush(stdin);
	cout<<"Medium score: "; cin>>mediumScore;
	fflush(stdin);
	cout<<"Classification: "; cin>>classification;
}
student student::displayInformation(){
	cout<<"Student code: "<<studentCode;
	cout<<"\nFull name: "<<fullName;
	cout<<"Day of birth: "<<dayOfBirth;
	cout<<"\nMonth of birth: "<<monthOfBirth;
	cout<<"\nYear of birth: "<<yearOfBirth;
	cout<<"\nGender: "<<gender;
	cout<<"\nMedium score: "<<mediumScore;
	cout<<"\nClassification: "<<classification;
}
int main(){
	student highScoreStd,lowScoreStd,s;
	highScoreStd.getInformation();
	cout<<endl;
	fflush(stdin);
	lowScoreStd.getInformation();
	
	if (highScoreStd.mediumScore < lowScoreStd.mediumScore){
		s.displayInformation()=highScoreStd.displayInformation();
		highScoreStd.displayInformation()=lowScoreStd.displayInformation();
		lowScoreStd.displayInformation()=s;
		
		cout<<"\nInformation of high score student:\n";
	    highScoreStd.displayInformation();
	    cout<<"\n\nInformation of low score student: \n";
	    lowScoreStd.displayInformation();
	}
	else{
		cout<<"\nInformation of high score student:\n";
	    highScoreStd.displayInformation();
	    cout<<"\n\nInformation of low score student: \n";
	    lowScoreStd.displayInformation();
	}
	return 0;
}

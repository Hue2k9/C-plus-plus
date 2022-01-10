#include<bits/stdc++.h>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int day, int month, int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void setDate(int day, int month, int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void setDay(int day){
			this->day=day;
		}
		void setMonth(int month){
			this->month=month;
		}
		void setYear(int year){
			this->year=year;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		void display(){
			if (day<=9)
			   cout<<"0"<<day<<"/";
			else
			   cout<<day<<"/";
			if (month<=9)
			   cout<<"0"<<month<<"/";
			else
			   cout<<month<<"/";
			cout<<year<<endl;
		}
		
};
int main(){
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();
	return 0;
}

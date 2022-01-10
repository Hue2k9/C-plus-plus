#include<iostream>
#include<string>
using namespace std;
class Date{
	private:
		int day,month,year;
	public:
		void input(){
			cout<<"\nDay: ";
			cin>>day;
			cout<<"Month: ";
			cin>>month;
			cout<<"Year: ";
			cin>>year;
		}
		void Output(){
			cout<<"Day: "<<day;
			cout<<"\nMonth: "<<month;
			cout<<"\nYear: "<<year;
		}
};
class Address{
	private:
		char phoneNumber[12],ward[30],district[30],city[30];
	public:
		void input(){
			cout<<"Phone number: ";
			fflush(stdin);
			gets(phoneNumber);
			cout<<"Ward: ";
			fflush(stdin);
			fgets(ward,sizeof(ward),stdin);
			cout<<"District: ";
			fflush(stdin);
			fgets(district,sizeof(district),stdin);
			cout<<"City: ";
			fflush(stdin);
			fgets(city,sizeof(city),stdin);
		}
		void output(){
			cout<<"\nPhone number: "<<phoneNumber;
			cout<<"\nWard: "<<ward;
			cout<<"District: "<<district;
			cout<<"City: "<<city;
		}
};
class DoanhNghiep{
	private:
		int maDn;
		char tenDn[60],giamDoc[30];
		Date ngayTl;
		Address address;
		long doanhThu;
	public:
		void Input(){
			cout<<"Ma doanh nghiep: ";
			cin>>maDn;
			cout<<"Ten doanh nghiep: ";
			fflush(stdin);
			fgets(tenDn,sizeof(tenDn),stdin);
			cout<<"--Ngay tl--";
			ngayTl.input();
			address.input();
			cout<<"Giam doc: ";
			fflush(stdin);
		    fgets(giamDoc,sizeof(giamDoc),stdin);
		    cout<<"Doanh thu: ";
		    cin>>doanhThu;
		}
		void Output(){
			cout<<"\nMa doanh nghiep: "<<maDn;
			cout<<"\nTen doanh nghiep: "<<tenDn;
			ngayTl.Output();
			cout<<"\nDia chi: ";
			address.output();
			cout<<"Giam doc: "<<giamDoc;
			cout<<"Doanh thu: "<<doanhThu;
		}	
};

int main(){
	DoanhNghiep a;
	a.Input();
	a.Output();
	return 0;
}


#include<iostream>
#include<math.h>
using namespace std;
class PT{
	private:
		int a,b,c;
	public:
		PT(int a, int b, int c);
		PT();
		~PT(){
			cout<<"\nHAM HUY DUOC GOI";
		}
		void Nhap();
		void Xuat();
		void Giai();
};
PT::PT(int a, int b, int c){
		this->a=a;
	    this->b=b;
	    this->c=c;
}
PT::PT(){
	a=0;
	b=0;
	c=0;
}
void PT::Nhap(){
   cout<<"Nhap a= "; cin>>a;
   cout<<"b= "; cin>>b;
   cout<<"c= "; cin>>c;
}
void PT::Xuat(){
	char arr[1];
	if (b<0)
	   arr[0]='-';
	else
	   arr[0]='+';
	if (c<0)
	   arr[1]='-';
	else
	   arr[1]='+';
	cout<<a<<"x2"<<arr[0]<<abs(b)<<"x"<<arr[1]<<abs(c)<<"=0";
	
}
void PT::Giai(){
   int delta=b*b-4*a*c;
   double x1,x2;
   if(a!=0){
   	 if (delta>=0){
   	 	if (delta==0){
   	 	   cout<<"\nPT co nghiem kep: x1=x2="<<(double)-b/(2*a);
	        }
   	 	else{
   	 		x1=-b+sqrt(delta)/(2*a);
   	 		x2=-b-sqrt(delta)/(2*a);
   	 		cout<<"\nPT co 2 nghiem phan biet\n";
   	 		cout<<"x1= "<<x1;
   	 		cout<<"\nx2= "<<x2;
			}
	    }
	 else
	    cout<<"\nPhuong trinh vo nghiem!";
   }
   else
     cout<<"\nPT co 1 nghiem duy nhat x="<<(double)-c/b;
}
int main(){
	PT y1(3,-8,4), y2;
    cout<<"PT P:\n";
	y1.Xuat();
	y1.Giai();
	
    cout<<"\n\nPT Q: "<<endl;
    y2.Nhap();
    y2.Xuat();
    y2.Giai();
	return 0;
}

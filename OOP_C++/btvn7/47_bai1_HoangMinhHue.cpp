#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
class ComplexNumber{
	private:
		int real, virual;
	public:
		//Khoi tao
		ComplexNumber(){
			
		}
		ComplexNumber(int real, int virual){
			this->real=real;
			this->virual=virual;
	    }
	    //Phuong thuc toan tu +
	    friend ComplexNumber operator + (ComplexNumber& sp1, ComplexNumber& sp2){
	        ComplexNumber x;
	        x.real=sp1.real+sp2.real;
	        x.virual=sp1.virual+sp2.virual;
	        return x;
        }
        //Phuong thuc toan tu -
        friend ComplexNumber operator - (ComplexNumber& sp1, ComplexNumber& sp2){
	        ComplexNumber x;
	        x.real = sp1.real - sp2.real;
	        x.virual = sp1.virual - sp2.virual;
	        return x;
        }
        //Ham toan tu xuat
        friend ostream& operator << (ostream& os, ComplexNumber sp){
        	if (sp.virual<0){
        		os<<sp.real<<" - i*"<<abs(sp.virual);
			}
			else{
				os<<sp.real<<" + i*"<<sp.virual;
			}
			return os;
		}
};

int main(){
	ComplexNumber sp1(2,3), sp2(3,5);
	ComplexNumber sp3=sp1+sp2, sp4=sp1-sp2;
	cout<<"Tong 2 so phuc: sp3 = "<<sp3<<endl;
	cout<<"Hieu 2 so phuc: sp4 = "<<sp4<<endl;
	return 0;
}

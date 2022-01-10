#include<iostream>
using namespace std;
int main(){
	for(int i=1; i<=125; i++){
			if (i*4+i==125 && i%4==0)
			  cout<<"trang: "<<i<<" xanh: "<<i*4<<endl;
	}
	return 0;
}

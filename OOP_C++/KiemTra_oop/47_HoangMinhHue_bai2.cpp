#include<bits/stdc++.h>
using namespace std;
class Array{
	private:
        int *a;
		int n;
	public:
		Array(int *a){
			for(int i=0; i<n; i++){
				this->a[i]=a[i];
			}
		}
};
istream& operator>>(istream& is, Array *m){
		is>>m.*a;
	return is;
}
ostream& operator<<(ostream& os, Array *a){
		os<<a<<" ";
	return os;
} 
friend Array operator * (Array& m, int k){
	int x;
    if (a<5){
    	x=m.a*(-1);
	}
	return x;
}
int main(){
	
	return 0;
}

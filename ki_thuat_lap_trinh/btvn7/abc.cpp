#include<iostream>
using namespace std;
int Tim_Max(int a, int b){
	if (a>b)
	  return a;
	if (b>a)
	   return b;
	return a;
}
float Tim_Max(float a, float b){
	if (a>b)
	  return a;
	if (b>a)
	   return b;
	return a;
}
int main(){
	float a=5.5,b=10.9;
	cout<<Tim_Max(a,b);
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int i;
		for ( i=0; i<=99; i++){
			if (i / 10==0)
		     cout<<" "<<i<<" ";
		    else
		     cout<<i<<" ";
		     
		    if (i % 10 ==9)
	    cout<<"\n";
	}

	return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double novac;
	double kamata;
	double n;
	
	cin>>novac>>kamata>>n;
	
	if((novac < 10000) && (novac > 0)){
			if((kamata < 5) && (kamata > 0)){
		if((n < 100) && (n > 1)){
		for(int i=0;i < n;i++){	
		novac =	novac + novac * kamata / 100;
			cout << fixed << setprecision(2) << novac<<endl;
		}
	}
	}
	}	
}

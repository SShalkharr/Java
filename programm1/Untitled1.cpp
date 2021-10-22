//esep 5
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float const x = 1.2;
	float a;
	double y;
	for( a = 0.1; a <= 0.5; a = a + 0.1){
	if(a <= x){
	y = a*x+0.23*x*x*log2(a);
	cout<<" a <= x "<<endl;	
	}	
	
	if(a > x){
		y = (x*exp(a)*cos(x))/fabs(x+a);
		cout<<" a > x ";}
	
	cout<<" y = "<<y<<endl;}
	
}

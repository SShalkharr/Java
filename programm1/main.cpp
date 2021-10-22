#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	
	using namespace std;
	
	long double sum = 0;
	int k = 1, x;
	cout<<"x = ";
	cin>>x;
	
	while(k){
		sum += pow(-1,k)/(pow(x,2)*k);
		cout<<" Sum "<<k<<": "<<sum<<endl;
		k++;
	}
	
	return 0;
}

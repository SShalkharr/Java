#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(0));
	
	int c=rand()%100;
    int d[100];
    
    for(int i=0;i<=100;i++){
    		cout<<d[i]<<endl;
    		c=d[i];
	}
    
  cout<<" c= "<<c<<endl;

	return 0;
}

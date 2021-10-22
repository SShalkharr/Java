#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int c[100],n;
	double sum;
	
    for(int i=0;i<6;i++){
        c[i] = rand()%20;
        cout<<"\t"<<c[i];
    } 
	cout<<endl;
	
    for(int i=0;i<6;i++){
        
         if(i==0){
         	c[i]=n;
         	cout<<" massiv sandadaryn "<<n<<" sanyna bolemiz "<<endl;
		 }
		 
		  
		 sum = c[i] / n;
		 
		 cout<<"\t"<<sum;
		 
		
    } 

    
    
}


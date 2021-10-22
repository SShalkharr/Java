#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	srand(time(NULL));
	int c[100],sum;
	double b=0;
	
    for(int i=0;i<6;i++){
        c[i] = rand()%20;
        cout<<"\t"<<c[i];
    } 
	cout<<endl<<endl;
	
    for(int i=0;i<6;i++){
    	if(c[i]==2){cout<<"\t"<<c[i];
		}
		if(c[i]%3==0){cout<<"\t";
		}
		if((c[i]+3)%3==0){cout<<"\t";
		}
    	if((c[i]+1)%2==0){
    		if(c[i]%1==0 && c[i]%c[i]==0){
    			if((c[i]+c[i])%2==0){
    				
    				cout<<"\t"<<c[i];
				}
			}
		}
	}	
}

    
 

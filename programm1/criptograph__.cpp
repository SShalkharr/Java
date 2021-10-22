#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
    cout<<"    ≈ки саннын ≈”ќЅ табу   "<<endl;
    cout<<"еки санды енгиз: ";
    int a,b,q;
    cin>>a>>b;
    
   
    		while(b){
    			q = a%b;
    			a = b;
    			b = q;
    	     }
    	    cout<<" ≈”ќЅ : "<<a<<endl; 
    	 
		}
	






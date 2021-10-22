#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	
    ofstream Soo;
	Soo.open("1-Fail.txt",ofstream::app);
	ofstream Saa;
	Saa.open("2-Fail.txt",ofstream::app);
	if(!Soo.is_open()){
		cout<<" ERROR!!! "<<endl;
	}
	else{ 
	    cout<<" Fail satty ashyldy!!! "<<endl;
      	int a[5];
      	for(int i=0;i<5;i++){ 
      	    cin>>a[i];
      	    
		    if(a[i]%2==0){
		        Soo<<a[i];
	        }
		    else{
			Saa<<a[i];			
		    } 	   
	    }
	}
	
	Soo.close(); 
	Saa.close();
	return 0;
}

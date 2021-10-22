#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
    ofstream Soo;
	Soo.open("1-Fail.txt",ofstream::app);
	ofstream Saa;
	Saa.open("2-Fail.txt",ofstream::app);
	if(!Soo.is_open()){
		cout<<" ERROR!!! "<<endl;
	}
	else{ 
	    cout<<" Fail satty ashyldy!!! "<<endl;
      	int SIZE;
        cout<<" San engiz: ";
	    cin>>SIZE;  
        int a[SIZE];
        for (int i=0; i<SIZE; i++){
    	     a[i]=rand()%50;
    	     cout<<a[i]<<"\t";
	     }
    cout<<endl;
   
    for(int i=0;i<SIZE;i++){
        for (int j=i+1; j<SIZE; j++){
            if (a[j] < a[i]){
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    
	for (int i = 0; i < SIZE  ; i++){
		if(a[i]%2==0){
        Soo << a[i] << " ";}
    }
    
	
		
		for (int i = SIZE-1; i>=0 ; i--){
		if((a[i]+1)%2==0){
        Saa << a[i] << " ";}
    }		
}
	
	Soo.close(); 
	Saa.close();
	return 0;
}

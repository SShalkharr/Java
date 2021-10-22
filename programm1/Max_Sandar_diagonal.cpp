#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 int const n = 4;
 
 void sandar(int A[n][n]){
 	for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
            A[i][j] = rand()%15;}}
 }
 
void shygaru(int A[n][n]){
     for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
            cout<<A[i][j]<<"\t";}
            cout<<endl;}    	
}

 void auystyru(int A[n][n],int max[n]);
 
  int main(){
   srand(time(0));
   int A[n][n];
   int max[n];
   
   sandar(A);
   shygaru(A);  
   cout<<endl;
   auystyru(A,max);

    return 0;
}

void auystyru(int A[n][n], int max[n]){
	for(int i=0; i<n; i++){
	  max[i]=A[i][0];
        for(int j=0;j<n;j++){
    	
         if(A[i][j] >= max[i]){
		 max[i] = A[i][j];
		 }
        
	     }cout<<i+1<<"-"<<max[i]<<endl;
	}
	cout<<endl;
	
	for(int i=0; i<n; i++){
    for(int j=0;j<n;j++){
    	if(i==j){
    		A[i][i] = A[i][j];
			A[i][j] = max[i];}
        }
	}
    	
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
			cout<<A[i][j]<<"\t";
		}cout<<"\n";		
	}
}

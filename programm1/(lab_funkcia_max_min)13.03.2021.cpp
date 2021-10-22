#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int const n = 10;

void san(int a[n]){
   
	for(int i=0;i<n;i++){
		a[i] = rand() % 60+1;
		cout<<a[i]<<"\t";
	}cout<<endl;
}

void ulken(int a[n],int max){
    max=a[0];
	for(int i = 0; i < n;i++){
	if(a[i] > max){ 
	max = a[i];	
	}	
			}	cout<<"max element: "<<max<<endl;
			
}
 void kishi(int a[n],int min){
    min=a[0];
 		for(int i = 0; i < n;i++){
	if(a[i] < min){ 
	min = a[i];	
	}	
            }   cout<<"min element: "<<min<<endl;
}
 
int main(){
	srand(time(0));
	int a[n];
	int max,s;
	int min;
	san(a);
    ulken(a,max);
    kishi(a,min);
   max=min;
   min=max;
    for(int i = 0; i <n;i++){
		cout<<a[i]<<"\t";
	}

	}

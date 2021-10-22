#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int const n = 10;
void san(int a[n]){
	for(int i=0;i<n;i++){
		a[i] = rand() % 20;
		cout<<a[i]<<"\t";
	
} cout<<endl;}

void jai_san(int a[n]);
int main(){
srand(time(0));	
   int a[0];
   san(a);	
   cout<<endl;
   cout<<"Zhai sandar: ";
   jai_san(a);
   
	return 0;
}
void jai_san(int a[n]){
	for(int i=0; i < n; i++){
		 for (int j=2; j <= a[i]/2; j++){
             if (a[i]%j == 0 && a[i] != j){
                a[i] = 0;
                break;
             }
        }
        if (a[i] != 0 && a[i]>1){
            cout << a[i] << " ";}	
		}
	}


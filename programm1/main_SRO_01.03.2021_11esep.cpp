//матрицадагы мах элементти тауып онын орнын корсетеди
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    srand(time(0));
    int n, m;
    cout << "Zhol sanyn engyz: ";
    cin >> n;
    cout << "Bagan sanyn engyz: ";
    cin >> m;
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = rand() % 10-6;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }                            //aidyn-94-10@mail.ru

  int max,c=0,b=0;
  
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m ; j++) {
        	
           if( a[c][b] < a[i][j]){
		   max = a[i][j];
           c = i;
           b = j;
		   }	
         }
    }   
  cout<<" max = "<<max<< endl;
   cout<<" max element indeksi"<<"  a["<<c<<"]"<<"["<<b<<"]";

}

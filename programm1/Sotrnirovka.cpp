#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int SIZE;
    cout<<" San engiz: ";
	cin>>SIZE;  
    int a[SIZE];
    for (int i=0; i<SIZE; i++){
    	a[i]=rand()%10+5;
    	cout<<a[i]<<"\t";
	}
    cout<<endl;
   
    for(int i=0;i<SIZE;i++){// упорядочить по возрастанию
        for (int j=i+1; j<SIZE; j++){
            if (a[j] < a[i])
			 //> zhane < tanbasyn auystyrsan boldy :)
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    cout<<" Osu retimen: "<<endl;
	for (int i = 0; i < SIZE; i++){
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;                   
}

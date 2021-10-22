#include <iostream>
using namespace std;

    int main(){    

    int a,n,sum,d; 
    cout<<"Kez-kelgen san jaz: ";
    cin>>sum;
    a = n = 0; 

    while (sum> 0){
       d = sum % 10; 
           if (d % 2 == 1)a++;
           else n++;
           sum /= 10; 
	}
    cout<<"Jup sandar: "<<n<<endl;
    cout<<"Tak sandar: "<<a<<endl;
    }

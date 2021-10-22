#include <iostream>
using namespace std;
int main()
{     cout <<" _Algashky zhane songy sandardyn kosyndysyn tabu_"<<endl;
       int a,sum;
	   long long int n;	
       cout<<" kez-kelgen sandy engiz n: ";
       cin>>n;
       a=n % 10;
       while( n > 10)
       {n=n/10;
	   cout<<n<<endl;}
       sum=a+n;
       cout<<" Natigesi: "<<sum<<endl;    }


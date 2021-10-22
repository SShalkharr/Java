#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b;
   while (a) {
      c = a % b;
      a = b;
      b = c;
     
   }
cout<<a;
}
	

	

	
	
	
	


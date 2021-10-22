#include <iostream>
#include <string>
using namespace std; 
int main()
{
    string sat = " Aaaa  aaaa ";
 
    for ( size_t i = 0; i < sat.size(); ++i)
        if ( i%3 != 2 ){
            cout << sat[i];}
 
    return 0;
}

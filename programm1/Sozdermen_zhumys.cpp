#include <iostream>
#include <string>
using namespace std;
 
int main()
{ setlocale (LC_ALL, "Rus");
 char text =" C++ œ–Œ√–¿ÃÃ¿À¿” “»À» ",temp="";
 size_t i=0;
 
  while(text[i]!='\0')
    {
       if(isalpha(text[i]))
           temp+=tolower(text[i]);
       i++;
    }
  text = temp;
  cout<<text<<" ";
  system("pause");
  return 0;
}

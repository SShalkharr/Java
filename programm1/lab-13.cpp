#include <iostream>
#include <string>

using namespace std;
char Stroka[150] = {0};
int M, z = 0, SD;
bool Palindrom = true;
 
int main(int argc, char* argv[])
{
  cout << " Soz zhazynyz :";
  cin >> Stroka;
  while(Stroka[z])
      z++;
  M = (int)(z/2);
  for(SD = 0; SD < M; SD++)
  {
      if(Stroka[SD] != Stroka[z-SD-1])
      {
          Palindrom = false;
          break;
      }
  }
  if(Palindrom)
    cout <<Stroka<<" - palindrom"<<endl;
  else
    cout <<Stroka<<" - palindrom emes"<<endl;
 
system("pause");
return 0;
}

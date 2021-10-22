#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        ifstream fin("Aioo.txt");
        char ch;
        int i, c = 0;
        while(fin)
        {
                fin.get(ch);
                i=ch;
                if((i > 63 && i < 91) || (i > 96 && i < 123))
                        c++;             
        }
        
        cout<<"\n Faildagy aripter sany : "<<c;
        return 0;
}
	


#include <iostream>
#include <string>
using namespace std;

void lower_string(string str)
{
	for(int i=0;i<=strlen.str;i++)
	{
			str[i] = str[i] + 32;         
	}
	cout<<"\n The string in lower case: "<< str;
}

void upper_string(string str)
{
	for(int i=0;i<=str.length();i++)
	{
			str[i] = str[i] - 32;       
	}
	cout<<"\n The string in upper case: "<< str;
}

int main()
{   setlocale (LC_ALL, "Rus");
	string str;
    cout<<" Соз тиркесин жазыныз: ";
    getline(cin,str);
    lower_string(str);       
	upper_string(str);   
	return 0;
}




/*#include<iostream>
#include<string>
using namespace std;
int main()
{   setlocale (LC_ALL, "Rus");
    char strUpper[50]="", strLower[50]="";
    int i=0, ascii, chk=0;
    cout<<"Enter the String: ";
    gets(strUpper);
    while(strUpper[i]!='\0')
    {
        if(strUpper[i]>='A' && strUpper[i]<='Z')
        {
            ascii = strUpper[i];
            ascii = ascii+32;
            strLower[i] = ascii;
            chk++;
        }
        else
            strLower[i] = strUpper[i];
        i++;
    }
    strLower[i]='\0';
    if(chk==0)
        cout<<"\nString is already in Lowercase";
    else
        cout<<"\nLowercase of String: "<<strLower;
    cout<<endl;
    return 0;
}*/





/*#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter a character in lowercase: "; 
   cin>>ch;
   ch=ch+32;
   cout<<"Entered character in uppercase: "<<ch;
   return 0;
} */

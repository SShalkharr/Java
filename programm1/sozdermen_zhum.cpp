#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	
    string str = "Men bugin",soz;
    cout<<str<<endl;
    int count = 0, a = 0 , b;
	for(int i = 0; i < str.length(); i++){
		if (str[i] == ' ')
		{
			str[i] = a;
			i = b;
			count++;	
		}
		
		if((count+1)-2==0){	
	    cout<<str[a+i];
		}
		
	}
	for(int i = 0; i < str.length(); i++){
		if (str[i] != ' ')
		{ soz = str.substr(0,b);
	    }
	    else{ break;
		}
	  }
	  cout<<soz<<endl;
	return 0;
}

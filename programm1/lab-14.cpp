#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int a, b, c;
    int l = str.length();
    if (l % 3 == 0){
        for (int i = 0; i < l; i++){
            if(str[i] == ' '){
                a = i;
                break;
            }
        }
        for (int i = a; i < l; i++){
            if(str[i] != ' '){
                b = i;
                break;
            }
        }
        for (int i = b; i < l; i++){
            if(str[i] == ' '){
                c = i;
                break;
            }
        }
        cout<<str.substr(0,a)<<str.substr(c,l)<<endl;
    }
    else{
    cout<<str;
	}
}

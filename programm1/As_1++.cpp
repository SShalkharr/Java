#include<iostream>
#include<string>
using namespace std;
  
void Sozder(string &input, string &az_soz, string &uzyn_soz) 
{
    int len = input.length();
    int s = 0, e = 0;
    int min_length = 0, min_index = 0, max_length = 0, max_index = 0;
  
    
    while (e <= len) 
    {
        if (e < len && input[e] != ' ')
            e++;
          
        else 
        {
            int length_1 = e - s;
            
            if (length_1 < min_length) 
            {
                min_length = length_1;
                min_index = s;
            }
              
            if (length_1 > max_length)
            {
                max_length = length_1;
                max_index = s;
            }
            e++;
            s=e;
        }
    }
    az_soz = input.substr(min_index, min_length);
    uzyn_soz = input.substr(max_index, max_length); 
}
  
int main() 
{
	string a = " Sabak takyryby zholdarmen zhumys";
	cout<<a<<endl;
    string az_soz, uzyn_soz;
    Sozder(a, az_soz, uzyn_soz);
      
    cout << " En kyska soz : "<< az_soz << endl;
    cout << " En uzyn soz : "<< uzyn_soz << endl;
    
} 

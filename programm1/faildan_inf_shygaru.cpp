// 6. Fail ishindregi malimetti ekranga shygary 
#include <iostream> 
#include <string> 
#include <fstream> 
using namespace std; 

int main(int argc, char** argv){
ifstream ashy; 
ashy.open("Shalkhar.txt",ios::in); 
    if(!ashy.is_open()){
    cout<<" ERROR!!! "<<endl; 
    }
    else{
     cout<<" Fail satty ashyldy!!! "<<endl; 
     char a; 
     cout<<" (fail ishindegi malimetter tomende:)"<<endl; 
    while(ashy.get(a)){
    cout<<a;
     }  
}
ashy.close();
return 0; 
}

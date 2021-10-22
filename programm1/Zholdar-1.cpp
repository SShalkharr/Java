#include <iostream>
#include <string>

using namespace std;
int main(){
	string bir_soz = "C++ 1010123 zholdar -*52/&#";
	cout<<bir_soz<<endl;
	
	char eki_soz;
	cin>>eki_soz;
	size_t found = bir_soz.find(eki_soz);
	if(found >= 27){
		
		cout<<" jok ondai symbol!!!"<<endl;
	}
	else{
		cout<<" bar ondai symbol!!!"<<endl;
	}	
}

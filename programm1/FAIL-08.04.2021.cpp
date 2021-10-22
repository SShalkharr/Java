#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	
	ofstream shalkar;
	shalkar.open("Shalkhar.txt", ios::app);
	string a;
	if(!shalkar.is_open()){
		cout<<" Error!!! "<<endl;
	}
	else{ 
	    cout<<" Atynyzdy zhazynyz : "<<endl;
	    cin>>a;
		shalkar<<a;
	}
	shalkar.close(); 
}

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
    cout<<"    ��� ������ ���� ����   "<<endl;
    cout<<"��� ����� �����: ";
    int a,b,q;
    cin>>a>>b;
    
   
    		while(b){
    			q = a%b;
    			a = b;
    			b = q;
    	     }
    	    cout<<" ���� : "<<a<<endl; 
    	 
		}
	






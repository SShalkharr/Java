#include <iostream>
#include <string>
using namespace std;
struct Emtihan{
	string name;
	int mat,fiz,inf;
	};
int main(){
    int sum=0,n;
   cout<<" Oqushy sany : ";
   cin>>n;
   Emtihan s[n];
   for(int i=0;i<n;i++){
   	cout<<i+1<<" Oqushy aty: ";
   	cin>>s[i].name;
   	cout<<" Matematika: ";
   	cin>>s[i].mat;
   	cout<<" Fizika: ";
   	cin>>s[i].fiz;
   	cout<<" Informatika: ";
   	cin>>s[i].inf;
   	cout<<endl;
   	if(s[i].mat==4 || s[i].fiz==4 || s[i].inf==4){
   		sum++;
	   }
   }
   
 cout<<" 4 algan studentter sany: "<<sum<<endl;
 cout<<"Studentter: "<<endl;
   for(int i=0;i<n;i++){
   	if(s[i].mat==4 ){
   		cout<<s[i].name<<" Matevatikadan "<<endl;
	   }
	if(s[i].fiz==4){
	    cout<<s[i].name<<" Fizikadan "<<endl;
	}
	if(s[i].inf==4){
		cout<<s[i].name<<" Informatikadan "<<endl;
	}
   }
}

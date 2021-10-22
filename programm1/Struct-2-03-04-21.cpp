#include <iostream>
#include <string> 
using namespace std;
 struct ekzamen{
     string name;
     int matematikadan;
     int informatikadan;
     int phizikadan;
	 };
 
int main() {
  double sum=0;
  int n;
  cout << "oqushylar sany:";
  cin>>n;
  ekzamen baly[n];
  for (int i=0; i<n; i++){
  cout <<i+1<<" Oqushy aty: ";
  cin>>baly[i].name;
  cout<<" matematika ";
  cin>> baly[i].matematikadan;
  cout<<" informatika ";
  cin>>baly[i].informatikadan;
  cout <<" phizika ";
  cin >> baly[i].phizikadan;
  cout << endl;} 
  
  for (int i =0;i<n;i++){
   sum=baly[i].matematikadan+baly[i].informatikadan+baly[i].phizikadan;
   cout<<i+1<<" oqushy "<<baly[i].name<<" orta baly = "<<sum/3<<endl;}
} 

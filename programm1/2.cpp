#include <iostream> 
#include <cmath> 
#include <string> 
using namespace std; 

struct factory{
string name, spec; 
int age, money; 
}; 

int main(){ 
double sum = 0; 
setlocale(LC_ALL, "Russian"); 
int n; 
cout << "������� ���������� �������: "; 
cin >> n; 
factory farm[n]; 
for (int i = 0; i < n; i++){ 
cout <<"����� " << i+1 <<endl; 
cout << "�������: "; 
cin >> farm[i].name; 
cout << "�������: "; 
cin >> farm[i].age; 
cout << "�������������: "; 
cin >> farm[i].spec; 
cout << "�����: "; 
cin >> farm[i].money; 
sum += farm[i].money; 
cout << endl; 
} 

    double avermon; 
    cout << endl; 
    avermon = sum / n; 
    cout << "������� �����: " << avermon << endl; 
    cout << "������ � ������� ���� �������� " << endl; 
    for (int i = 0; i < n; i++){ 
cout << endl; 
   if (farm[i].money >= avermon){ 
    cout << "�������: " << farm[i].name << endl; 
    cout << "�������: " << farm[i].age << endl; 
    cout << "�������������: " << farm[i].spec << endl; 
    cout << "�����: " << farm[i].money << endl; 
} 
} 
   cout << endl; 

} 

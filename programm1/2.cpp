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
cout << "Введите количество заводов: "; 
cin >> n; 
factory farm[n]; 
for (int i = 0; i < n; i++){ 
cout <<"Завод " << i+1 <<endl; 
cout << "Фамилия: "; 
cin >> farm[i].name; 
cout << "Возраст: "; 
cin >> farm[i].age; 
cout << "Специальность: "; 
cin >> farm[i].spec; 
cout << "Оклад: "; 
cin >> farm[i].money; 
sum += farm[i].money; 
cout << endl; 
} 

    double avermon; 
    cout << endl; 
    avermon = sum / n; 
    cout << "Средний Оклад: " << avermon << endl; 
    cout << "Заводы с окладом выше среднего " << endl; 
    for (int i = 0; i < n; i++){ 
cout << endl; 
   if (farm[i].money >= avermon){ 
    cout << "Фамилия: " << farm[i].name << endl; 
    cout << "Возраст: " << farm[i].age << endl; 
    cout << "Специальность: " << farm[i].spec << endl; 
    cout << "Оклад: " << farm[i].money << endl; 
} 
} 
   cout << endl; 

} 

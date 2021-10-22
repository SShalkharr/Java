#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(0, "rus");
    srand(time(0));
    cout << "Введите размер массива:" << endl;
    int array_size;
    cin >> array_size;
    int* myarray = new int[array_size];
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < array_size; ++i) {
        myarray[i] = rand() % 50;
        cout << myarray[i] << "\t";
    }
    cout << endl;
    cout << "Четные элементы:" << endl;
    for (int i = 0; i < array_size; ++i) {
        if (!(myarray[i]&1))
            cout << myarray[i]<<" ";
    }
    cout<<endl;
    cout << "Нечетные элементы:" << endl;
    for (int i = array_size; --i; ) {
        if (myarray[i - 1]&1)
            cout << myarray[i - 1]<<" ";
    }
    cout<<endl;
    return 0;
}

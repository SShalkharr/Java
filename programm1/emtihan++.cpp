// Recursia paidalanyp 100 sandardy kosy
#include <iostream>
using namespace std;

int recursia(int n)
{
    if (n <= 1)
    return n;
    return n + recursia(n - 1);


}
int main()
{
    int n = 100;
    cout << recursia(n);
    return 0;
}

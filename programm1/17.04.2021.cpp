#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    const int n = 4;
    const int m = 5;
    int A[n][m];
    int i, j, k = 0;

    cout << "Matrix:\n";

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            A[i][j] = rand() % 15;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i][j] != A[i][j + 1])
            {
            	k++;
                break;
            }
            else{
            	break;
			}
    }
    cout << "\nArturli elementterden turatyn joldar sany: " << k << endl;

    return 0;
}

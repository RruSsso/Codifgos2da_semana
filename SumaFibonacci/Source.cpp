#include <iostream>

using namespace std;

int main()
{
    int n, Suma = 0, n1 = 0, n2 = 1;
    bool c = false;

    cout << "Dame el numero que necsitas saber si es o no: ";
    cin >> n;

    do
    {
        Suma = n1 + n2;
        n1 = n2;
        n2 = Suma;

        cout << "Fibonacci: " << Suma << " Tu numero:" << n << endl;

        if (Suma == n)
        {
            c = true;
        }
        if (Suma > n)
        {
            break;
        }

    } while (!c);

    if (c)
    {
        cout << "\nTu numero " << n << " si es Fibonacci" << endl;
    }
    else
    {
        cout << "\nTu numero " << n << " no es Fibonacci" << endl;
    }

    return 0;
}
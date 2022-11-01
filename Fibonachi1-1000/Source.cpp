#include <iostream>

using namespace std;

int main() {
    unsigned long long aux = 1, fib = 0, lim, init;
   
    cout << "Ingresar hasta donde quieres la sucesion numerica: ";
    cin >> lim;
    if (lim > 0) {
        for (init = 1; init <= lim; init++) {
            cout << "[" << fib << "] ";
            aux += fib;
            fib = aux - fib;
        }
    }
    else {
        cout << "mijo neta 0??" << endl;
    }
    cout << "\n";
    return 0;
}
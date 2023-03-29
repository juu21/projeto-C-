#include <iostream>

using namespace std;

int main() {
  
    int base, expoente, resultado = 1;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    cout << base << " elevado a " << expoente << " é igual a " << resultado << endl;
    return 0;
}

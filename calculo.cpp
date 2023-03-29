#include <iostream>

using namespace std;

int main() {

int primeiro, segundo, i, resultado;

cout<<"\ndigite o primeiro:";
cin>> primeiro;
cout<< "\ndigite o segundo numero:";
cin>> segundo;

resultado= 1;
i = 0;
  while (i < primeiro){
  resultado = resultado * segundo;
  i = i + 1;
  }

cout << "\nresultado:" << resultado;
}

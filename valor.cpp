#include <iostream>

using namespace std;

int main() {
  float lado1, lado2, lado3; 

  cout << "Digite o valor do primeiro lado";
  cin >> lado1;

  cout << "Digite o valor do segundo lado";
  cin >> lado2;

  cout << "Digite o valor do terceiro lado";
  cin >> lado3;

  if (lado1 <= 0 ||  lado2 <= 0 || lado3 <= 0){
    cout << "Erro: um dos lados eh menor ou igual a zero";
    return 0;
  }
  if (lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado1 + lado2){
    cout << "Erro: um dos lados eh maior do que a soma dos outros dois";
    return 0;
  }
  if (lado1 == lado2 && lado1 == lado3) {
    cout << "O triangulo eh equilatero\n";
  }
  else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
    cout << "O triangulo eh isosceles\n";
  }
  else {
    cout << "O triangulo eh escaleno\n";
  }

return 0;
}

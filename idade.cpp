#include <iostream>

using namespace std;

int main() {

  cout << "Bom dia" << endl;

  float idade;

  cout << "Digite sua idade" << endl;
  cin >> idade;

  if (idade >= 65) {
    cout << "Voce é idoso" << endl;

  } else if (idade >= 45) {
    cout << "Voce esta na meia idade" << endl;

  } else if (idade >= 35) {
    cout << "Voce é adulto" << endl;

  } else if (idade >= 25) {
    cout << "Voce é jovem" << endl;

  }

  else if (idade > 18) {

    cout << "Voce é maior de idade";

  } else if (idade <= 18) {
    cout << "Voce é menor de idade";
  } else {

    cout << "Idade invalida" << endl;
  }
}

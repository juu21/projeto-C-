#include <iostream>

using namespace std;

int main() {
  int maria; int zezinho; int joaozinho; 

  cout << "Digite a idade de maria";
  cin >> maria;

  cout << "Digite a idade de zezinho";
  cin >> zezinho;

  cout << "Digite a idade de joaozinho";
  cin >> joaozinho;

  if (maria < 0 || maria > 150 || zezinho < 0 || zezinho > 150 || joaozinho < 0 || joaozinho > 150) {
    cout << "Erro, as idades devem estar entre 0 a 150 anos";
    return 0;
    }

  if (joaozinho == maria && maria == zezinho){
    cout << "Todos tem a mesma idade";
  }
  else if (joaozinho >= maria && joaozinho >= zezinho){
    cout << "Joaozinho eh o mais velho";
  }
  else if (maria >= joaozinho && maria >= zezinho){
    cout << "Maria eh a mais velha";
  }
  else if (zezinho >= joaozinho && zezinho >= maria){
    cout << "Zezinho eh o mais velho";
  }
  else {
    cout << "Duas crianças tem a mesma idade e sao mais velhas";
  }
  return 0;
}

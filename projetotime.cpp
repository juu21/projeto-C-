#include <iostream>

using namespace std;

int main() {

  int opcao;
  
  while (opcao != 3){ 
  
  cout << "\nQual seu time preferido?";
  cin >> opcao;

  if (opcao == 1) {
    cout <<"\nVoce digitou 1 - Meu time é o Inter";
  }
  else if(opcao == 2){
    cout << "\nVoce digitou 2 - Meu time é o gremio";
  }
  else if(opcao == 3){
    cout << "\nVoce digitou 3- Saindo do programa";
  }

   else {
     cout<< "\nVoce digitou qualquer numero - opcao invalida";
   }
}
}

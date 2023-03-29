#include <iostream>
using namespace std;

int main() 
{
  int numero;
  bool isRunning =true; 
  int contador = 1;
  char resposta;
  while (contador <= 10)
  {

  cout << !"Contador:" << contador << endl;
contador++;
 
  }

  cout<< "informe um numero de 1 a 7:" ;
  cin>>numero;
  
  cout<<"voce escolheu o numero:" <<numero << endl; 
  
  if (numero==1) {
    cout<<"domingo";
  }
  else if (numero==2){
    cout<<"segunda-feira";
  }
  else if (numero==3){
    cout<<"terça-feira";
  }
  else if (numero==4){
    cout<<"quarta-feira";
    }
  else if (numero==5){
    cout<<"quinta-feira";
    }
    else if (numero==6){
    cout<<"sexta-feira";
      }
   else if (numero==7){
    cout<<"sabado";
  }
    else
  {
    cout<< "Valor nao corresponde a um dia da semana";
  }

    while (resposta != 'S' && resposta != 's'&& resposta != 'N' && resposta != 'n')
      {
        cout<< "\n\nDeseja consultar outro dia? (S/N)";
        cin >> resposta;

        if (resposta == 'N' || resposta == 'n')
        isRunning = false;
      }
   }

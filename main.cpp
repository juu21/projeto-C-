#include <iostream>

using namespace std;

int main() {

    float a;
    float b;
    float c;
  
  cout << "Qual o valor do primeiro lado? " << endl;
  cin >> a;

  cout << "Qual o valor do segundo lado? " << endl;
  cin >> b;

  cout << "Qual o valor do terceiro lado? " << endl;
  cin >> c;

  if((a + b) > c && (a + c) > b && (b + c) > a){
    cout << "\nNao forma um triangulo.";
    
  if( (a==b) && (b==c)&& (a==c)) {
    cout << "Equilatero" << endl;
    
  }
   else if( (a!=b) && (a!=c) && (b!=c) ) {
    cout << "Escaleno" << endl;
       
  }
     
   else if ((a=b!=c) && (a=c!=b) && (c=b!=a) ){
    cout << "Isosceles" << endl;
    
  }
   else {
    cout << "nao forma um triangulo" << endl;
  
  }
  }
  }

// Inclusoes
#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
using namespace std;

// declaracao de constantes
// prototipo de funcoes
// declaracao de classes

class Geral
{ 
  public: 
  Geral()
  {
    cout << "construtor!" << endl;
  }
  
  ~Geral()
  {
    cout << "destrutor!" << endl;
  }
  
  // Construtor com valores default igual a zero (inline)
  void escreve(char);
  int le();
  void espera(int);
  
}; // fim da declaracao da classe

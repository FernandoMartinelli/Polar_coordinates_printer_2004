// Inclusoes
#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#ifndef Circun
#define Circun
using namespace std;

// declaracao de constantes
// prototipo de funcoes
// declaracao de classes
 
class Circunferencia
{
 public: // definindo permissao publica para acesso a membros e funcoes
  int raio;
  int passos;
  
  // Construtor com valores default igual a zero (inline)
  Circunferencia(int aRaio = 50, int aPassos = 200)
  {
    // inicializacao de membros
    raio = aRaio;
    passos = aPassos;
           
    cout << "construtor!" << endl;
  }
  
  ~Circunferencia()
  {
    cout << "destrutor!" << endl;
  }
  // Funcao para impressao no PLOTTER circunferencia
  void imprimeCircunferencia(int aSentido=1, int aTempo=50);
  // Funcao para impressao de arcos no PLOTTER 
  void Circunferencia::imprimeArco(int aSentido, int aTempo, int TamArco);
  // Funcao para impressao de retas no PLOTTER 
  void Circunferencia::imprimeReta(int aSentido, int aTempo, int TamReta);
  // Funcao para impressao de retas inclinadas no PLOTTER
  void Circunferencia::imprimeRetaInclinada(int aSentido, int aTempo, int TamReta, int inclinacao);
  // Funcao para impressao na TELA dos parametros
  void imprimeParametros();

}; // fim da declaracao da classe
#endif

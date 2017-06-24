#include "circunferencia.h"
//#include <iostream>

#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#include "letraN.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

void LetraN::imprime(int aTempo1, int aTempo2)
{
     Paralela Porta;
     Circunferencia circ;
     
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: LetraN" << endl; 
    circ.imprimeReta(1, aTempo1, fonte);
    circ.imprimeRetaInclinada(3,aTempo2, fonte, 4);
    circ.imprimeReta(1, aTempo1, fonte);
    circ.imprimeReta(0, aTempo1, fonte);
    circ.imprimeArco(1, aTempo2, (fonte/20));
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: Fim LetraN" << endl;    
      
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}




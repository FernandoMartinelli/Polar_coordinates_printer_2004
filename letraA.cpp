#include "circunferencia.h"
//#include <iostream>

#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#include "letraA.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

void LetraA::imprime(int aTempo1, int aTempo2)
{
     Paralela Porta;
     Circunferencia circ;
     
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: LetraA" << endl; 
    circ.imprimeRetaInclinada(1,aTempo2, fonte, 5);
    circ.imprimeRetaInclinada(3,aTempo2, fonte, 5);
    circ.imprimeRetaInclinada(2,aTempo2, (fonte/2), 5);
    circ.imprimeArco(0, aTempo2, ((fonte/2)/5));
    circ.imprimeArco(1, aTempo2, ((fonte/2)/5));
    circ.imprimeRetaInclinada(3,aTempo2, (fonte/2), 5);
    circ.imprimeArco(1, aTempo2, (fonte/20));
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: Fim LetraA" << endl;    
      
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}




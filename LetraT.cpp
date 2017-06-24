#include "circunferencia.h"
//#include <iostream>

#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#include "LetraT.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

void LetraT::imprime(int aTempo1, int aTempo2)
{
     Paralela Porta;
     Circunferencia circ;
     
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: LetraT" << endl; 
    circ.imprimeArco(1, aTempo2, (fonte/20));
    circ.imprimeReta(1, aTempo1, fonte);
    circ.imprimeArco(0, aTempo2, (fonte/2)/6);
    circ.imprimeArco(1, aTempo2, (fonte/7));//correcao tosca
    circ.imprimeArco(0, aTempo2, (fonte/2)/6);
    circ.imprimeReta(0, aTempo1, fonte);
    circ.imprimeArco(1, aTempo2, (fonte/8));
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: Fim LetraT" << endl;    
      
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}




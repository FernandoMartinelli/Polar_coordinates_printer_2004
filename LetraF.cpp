#include "circunferencia.h"
//#include <iostream>

#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"
#include "LetraF.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

void LetraF::imprime(int aTempo1, int aTempo2) // Retas1 e arcos2 podem ter tempos diferentes.
{
     Paralela Porta;
     Circunferencia circ;
     
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: LetraF" << endl; 
    circ.imprimeReta(1, aTempo1, fonte);
    circ.imprimeArco(1, aTempo2, (fonte/2)/6);
    circ.imprimeReta(0, aTempo1, fonte/5);
    circ.imprimeReta(1, aTempo1, fonte/5);
    circ.imprimeArco(0, aTempo2, (fonte/2)/6);
    circ.imprimeReta(0, aTempo1, (fonte/2));
    circ.imprimeArco(1, aTempo2, (fonte/2)/6);
    circ.imprimeArco(0, aTempo2, (fonte/2)/6);
    circ.imprimeReta(0, aTempo1, (fonte/2));
    circ.imprimeArco(1, aTempo2, (fonte/2)/6);
    circ.imprimeArco(1, aTempo2, (fonte/30));
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: Fim LetraF" << endl;    
      
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}




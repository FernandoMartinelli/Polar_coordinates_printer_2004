#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
 
   
   
void Geral::escreve(char valor)
    {
    (oup32)(0x378, valor);
    }
int Geral::le()
    {
    return (inp32)(0x378);
    }
void Geral::espera(int miliseconds)
   {
       clock_t endwait;
       endwait = clock () + (miliseconds * CLK_TCK)/1000 ;
       while (clock() < endwait) {}
   }

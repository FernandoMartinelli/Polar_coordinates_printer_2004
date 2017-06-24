#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#include "circunferencia.h"
#include "paralela.h"
#include "letraA.h"
using namespace std;

typedef short _stdcall (*inpfuncPtr)(short portaddr);
typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);


/******************************************************************************/   
int main(void)
{
   Circunferencia bolinha1(28,50); //raio passos(50)=uma volta
   //bolinha1.imprimeParametros();
   //bolinha1.imprimeCircunferencia(1,50); // sentido(1)=horario, tempo
   //bolinha1.imprimeRetaInclinada(4,50,40,5);
   LetraA a(30);
   a.imprime(50);
} //fim main




      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      


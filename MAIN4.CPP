#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#include "circunferencia.h"
#include "paralela.h"
#include "letraA.h"
#include "letraN.h"
#include "letraE.h"
#include "letraT.h"
#include "letraI.h"
#include "letraF.h"
#include "letraO.h"
#include "letraM.h"
#include "letraP.h"
#include "numero1.h"

using namespace std;

typedef short _stdcall (*inpfuncPtr)(short portaddr);
typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);


/******************************************************************************/   
int main(void)
{   
    char flag = 0;
   Circunferencia bolinha1(28,50); //raio passos(50)=uma volta
   //bolinha1.imprimeParametros();
   //bolinha1.imprimeCircunferencia(1,50); // sentido(1)=horario, tempo
   //bolinha1.imprimeRetaInclinada(4,50,40,5);
   while(flag != 32)
      {
      flag = getch();
      switch(flag)
            {
             case '1':
             bolinha1.imprimeRetaInclinada(4,20,5,3);// 1 fora-horario
//2 fora-antihorario, 3 dentro-horario, 4 dentro-antihorario
             break;             
             case '2': 
             bolinha1.imprimeReta(0, 20,1);
             break;
             case '3': 
             bolinha1.imprimeRetaInclinada(3,20,5,3);
             break;
             case '4': 
             bolinha1.imprimeArco(0, 50, 1);
             break;
             case '6': 
             bolinha1.imprimeArco(1, 50, 1);
             break;
             case '7': 
             bolinha1.imprimeRetaInclinada(2,20,5,3);
             break;
             case '8': 
             bolinha1.imprimeReta(1, 20, 1);
             break;
             case '9':
             bolinha1.imprimeRetaInclinada(1,20,5,3);
             break;
              
            };
      
      }
   LetraI i(40);
   LetraN n(40);
   LetraF f(40);
   LetraO o(40);
   Numero1 num1(40);
/*   
   LetraP p(40);
   LetraE e(40);
   LetraT t(40);
   LetraM m(40);   
   LetraA a(40);
*/
   
/*****************************/

   i.imprime(20,80);
   n.imprime(20,80);
   f.imprime(20,80);
   o.imprime(20,80);
   num1.imprime(20,80);   

} //fim main




      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      


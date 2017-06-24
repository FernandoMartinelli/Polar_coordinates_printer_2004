#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

int tempo=50; // eh o tempo usado entre um passo e outro

//char a=0x11, b=0x22, c=0x44, d=0x88; //normal dentro antihorario
//char a=0x88, b=0x44, c=0x22, d=0x11; //normal fora horario
char a=0x33, b=0x66, c=0xCC, d=0x99; //alto-torque dentro antihorario
//char a=0x99, b=0xCC, c=0x66, d=0x33; //alto-torque fora horario


using namespace std;

typedef short _stdcall (*inpfuncPtr)(short portaddr);
typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);

void espera(int miliseconds)
   {
       clock_t endwait;
       endwait = clock () + (miliseconds * CLK_TCK)/1000 ;
       while (clock() < endwait) {}
   }
   
int main(void)
{
  HINSTANCE hLib;
   inpfuncPtr inp32;
   oupfuncPtr oup32;


   /* Carrega a biblioteca */
   hLib = LoadLibrary("inpout32.dll");
   
   if (hLib == NULL) 
   {
      printf("LoadLibrary Failed.\n");
      return -1;
   }
   
   /* Pega o endereço da função */
   inp32 = (inpfuncPtr) GetProcAddress(hLib, "Inp32");
   
   if (inp32 == NULL)      //Caso não consiga carregar a função
   {
      printf("GetProcAddress for Inp32 Failed.\n");
      return -1;
   }
      
   oup32 = (oupfuncPtr) GetProcAddress(hLib, "Out32");
   
   if (oup32 == NULL) //Caso não consiga carregar a função
   {
      printf("GetProcAddress for Oup32 Failed.\n");
      return -1;
   }
   /*************************************************************************/
    //(inp32)(i);
        
   int entra;
   while(true)
   {
     
        (oup32)(0x378, a);
   		entra = (inp32)(0x378);  
   		espera(tempo);   
   		printf("\n Entra %x", entra); 
    
   		(oup32)(0x378, b);
   		entra = (inp32)(0x378);  
   		espera(tempo);   
   		printf("Entra %x", entra); 
   
   		(oup32)(0x378, c);
   		entra = (inp32)(0x378);  
   		espera(tempo);   
  		 printf("Entra %x", entra); 
   
   		(oup32)(0x378, d);
   		entra = (inp32)(0x378);  
   		espera(tempo);   
   		printf("Entra %x", entra);
  
   }//fim while
     
} //fim main
    


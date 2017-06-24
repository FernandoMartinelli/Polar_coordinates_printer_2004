#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#include "circunferencia.h"
#include "geral.h"

using namespace std;

typedef short _stdcall (*inpfuncPtr)(short portaddr);
typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);


/******************************************************************************/   
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
  
   Geral geral();
   Circunferencia bolinha1(60,200);
   bolinha1.imprimeParametros();
   bolinha1.imprimeCircunferencia();
   
} //fim main




/*
      motor1(int velocidade) // 1 a 500
      { if(velocidade>0)
            {
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11110011);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11110110);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11111100);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11111001);
            (oup32)(0x378, trem);
            }
      else
            {
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11110011);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11111001);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11111100);
            (oup32)(0x378, trem);
            
            atual = (inp32)(0x378);  
            espera(501-velocidade);
            trem = binaryAND(atual,11110110);
            (oup32)(0x378, trem);
            }
               
   		    
    
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
            }      
            
            
            
            
            
            
            
            
      }
      
      
      
      
      */
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      


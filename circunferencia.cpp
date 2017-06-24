//Esta classe deveria se chamar TRACADO ! 

#include "circunferencia.h"
#include <iostream>
#include <stdlib.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#include "paralela.h"

using namespace std;
/// definicao das funcoes de Tempo
// Funcao para impressao da hora

char a, b, c, d;

void espera(int miliseconds)
   {
       clock_t endwait;
       endwait = clock () + (miliseconds * CLK_TCK)/1000 ;
       while (clock() < endwait) {}
   }
void Circunferencia::imprimeArco(int aSentido, int aTempo, int TamArco)// 1 horario , zero anti-horario.
    {
        Paralela Porta;
        if(aSentido)
        a=0xC0, b=0x60, c=0x30, d=0x90; //alto-torque horario
        else
        a=0xC0, b=0x90, c=0x30, d=0x60; //alto-torque anti-horario 
        for(int i=0; i<TamArco; i++)
        {
      
        Porta.set_dado(a);
        Porta.set_status();
   		espera(aTempo);
 
   		Porta.set_dado(b);
        Porta.set_status();
   		espera(aTempo);
   		
   		Porta.set_dado(c);
        Porta.set_status();
   		espera(aTempo);
   
 		Porta.set_dado(d);
        Porta.set_status();
   		espera(aTempo);  
        }
    }
    
void Circunferencia::imprimeReta(int aSentido, int aTempo2, int TamReta)// 1 pra fora, Zero pra dentro
    {   
        Paralela Porta;
        if(aSentido)
        a=0xc9, b=0xcC, c=0xc6, d=0xc3; //alto-torque fora
        else
        a=0xC3, b=0xC6, c=0xCC, d=0xC9; //alto-torque dentro 
        for(int i=0; i<TamReta; i++)
        {
      
        Porta.set_dado(a);
        Porta.set_status();
   		espera(aTempo2);
 
   		Porta.set_dado(b);
        Porta.set_status();
   		espera(aTempo2);
   		
   		Porta.set_dado(c);
        Porta.set_status();
   		espera(aTempo2);
   
 		Porta.set_dado(d);
        Porta.set_status();
   		espera(aTempo2);  
        }
    }
    
void Circunferencia::imprimeRetaInclinada(int aSentido, int aTempo, int TamReta,int inclinacao)// 1 fora-horario
//2 fora-antihorario, 3 dentro-horario, 4 dentro-antihorario
    {   
        Paralela Porta;
        static int flag=3;
        //if(aSentido)
        //a=0x39, b=0x3C, c=0x36, d=0x33; //alto-torque fora
        //else
        //a=0xC3, b=0xC6, c=0xCC, d=0xC9; //alto-torque dentro 
        for(int i=0; i<TamReta; i++)
        {
        if(i%inclinacao==0) 
        {
                switch(aSentido)
                {
                case 1:
                    switch(flag)
                    {
                    case 1: 
                    a=0x39, b=0x3C, c=0x36, d=0x33;
                    flag++;
                    break;
                    case 2: 
                    a=0x99, b=0x9C, c=0x96, d=0x93;
                    flag++;
                    break;
                    case 3: 
                    a=0xc9, b=0xcC, c=0xc6, d=0xc3;
                    flag++;
                    break;
                    case 4: 
                    a=0x69, b=0x6C, c=0x66, d=0x63;
                    flag=1;
                    break;
                    };
                break;
                case 2:
                    switch(flag)
                    {
                    case 1: 
                    a=0x39, b=0x3C, c=0x36, d=0x33;
                    flag++;
                    break;
                    case 2: 
                    a=0x69, b=0x6C, c=0x66, d=0x63;
                    flag++;
                    break;
                    case 3: 
                    a=0xc9, b=0xcC, c=0xc6, d=0xc3;
                    flag++;
                    break;
                    case 4: 
                    a=0x99, b=0x9C, c=0x96, d=0x93;
                    flag=1;
                    break;
                    };
                break;
                case 3:
                    switch(flag)
                    {
                    case 1: 
                    a=0x33, b=0x36, c=0x3c, d=0x39;
                    flag++;
                    break;
                    case 2: 
                    a=0x93, b=0x96, c=0x9c, d=0x99;
                    flag++;
                    break;
                    case 3: 
                    a=0xc3, b=0xc6, c=0xcc, d=0xc9;
                    flag++;
                    break;
                    case 4: 
                    a=0x63, b=0x66, c=0x6c, d=0x69;
                    flag=1;
                    break;
                    };
                break;
                case 4:
                    switch(flag)
                    {
                    case 1: 
                    a=0x33, b=0x36, c=0x3c, d=0x39;
                    flag++;
                    break;
                    case 2: 
                    a=0x63, b=0x66, c=0x6c, d=0x69;
                    flag++;
                    break;
                    case 3: 
                    a=0xc3, b=0xc6, c=0xcc, d=0xc9;
                    flag++;
                    break;
                    case 4: 
                    a=0x93, b=0x96, c=0x9c, d=0x99;
                    flag=1;
                    break;
                    };
                break;
                };
        }     
        Porta.set_dado(a);
        Porta.set_status();
   		espera(aTempo);
 
   		Porta.set_dado(b);
        Porta.set_status();
   		espera(aTempo);
   		
   		Porta.set_dado(c);
        Porta.set_status();
   		espera(aTempo);
   
 		Porta.set_dado(d);
        Porta.set_status();
   		espera(aTempo);  
        }
    }
    
void Circunferencia::imprimeCircunferencia(int aSentido, int aTempo)
{
     
     Paralela Porta;
    /*************************** RAIO ****************************/     
  
    cout << "STATUS: POSICIONANDO RAIO" << endl; 
    Circunferencia::imprimeReta(1,aTempo,raio);
   
   /**************************** GIRO *********************************/
   // menos significativo=pequeno
   // mais significativo=grande

   cout << "STATUS: GIRANDO CANETA" << endl;    
   Circunferencia::imprimeArco(aSentido,aTempo,passos);
    
   /*************************** Volta RAIO ****************************/     
  
   cout << "STATUS: RECOLHENDO MOTOR PEQUENO" << endl; 
   Circunferencia::imprimeReta(0,aTempo,raio);
   
   Porta.set_dado(0x00); //pra nao deixar os motores ligados
   Porta.set_status();
   
}

void Circunferencia::imprimeParametros()
{
  cout << "Raio" << raio << endl;
  cout << "Passos" << passos << endl;
}



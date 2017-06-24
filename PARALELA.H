#include <conio.h>
#include <windows.h>

#ifndef ParalelaHHH
#define ParalelaHHH

class Paralela{


	private:
            
    typedef void _stdcall (*oupfuncPtr)(short portaddr, short datum);
	
    HINSTANCE hLib;
    oupfuncPtr oup32;
     	
    const static int porta = 0x378;
	char dado;


	public:
		
	Paralela(){
               
               hLib = LoadLibrary("inpout32.dll");
               oup32 = (oupfuncPtr) GetProcAddress(hLib, "Out32");
    };
	~Paralela(){};
	
 	void set_dado(char data);
	void set_status(void);
	
};
#endif

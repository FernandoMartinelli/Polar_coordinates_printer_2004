#include <conio.h>
#include <windows.h>
#include "paralela.h"

void Paralela::set_dado(char data){

	dado = data;
	

}

void Paralela::set_status(void){
	
	(oup32)(porta, dado);

}

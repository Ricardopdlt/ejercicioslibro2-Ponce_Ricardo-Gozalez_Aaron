//Ejercicio 26
//Con el menor número de instrucciones posibles he graficado el tablero de damas solicitado

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int i;
	i = 1;

	do { printf("* * * * * * * *\n");
	     printf(" * * * * * * * *\n");
		 i++;
	} 
	while (i <= 4);

	_getch();

}
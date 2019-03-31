//Ejercicio 2.24
//Escriba un programa que lea un entero, determine e imprima si es impar o par.

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	printf("Programa muestra si un numero entero es par o impar\n");
	int x, r;
	printf("Escriba el numero:\n");
	scanf("%d", &x);
	r = x % 2;
	if (r == 0)
	{
		printf("El numero es par");
	}
	else
	{
		printf("El numero es impar");
	}
	getch();
}


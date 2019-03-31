//Ejercicio 2.25
//Escriba un programa que lea dos enteros, determine e imprima si el primero es múltiplo del segundo.

#include <stdio.h>
#include <iostream>
#include <conio.h>
int main()
{
	printf("Programa muestra si el primer numero es multiplo del segundo\n");
	int x, y, r;
	printf("Escriba el primer numero:\n");
	scanf("%d", &y);
	printf("Escriba el segundo numero:\n");
	scanf("%d", &x);
	r = y % x;
	if (r == 0)
	{
		printf("%d es multiplo de %d", y, x);
	}
	else
	{
		printf("%d NO es multiplo de %d", y, x);
	}
	getch();
}
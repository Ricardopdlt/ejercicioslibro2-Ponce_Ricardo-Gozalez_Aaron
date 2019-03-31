//Ejercicio 2.29
//Utilice las técnicas de este capítulo para escribir un programa que calcule los cuadrados y cubos de los números 0 a 10.

#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Programa que calcula los cuadrados y cubos de los numeros del 0 al 10\n");
	int x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
	int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	x0 = 0 * 0;
	x1 = 1 * 1;
	x2 = 2 * 2;
	x3 = 3 * 3;
	x4 = 4 * 4;
	x5 = 5 * 5;
	x6 = 6 * 6;
	x7 = 7 * 7;
	x8 = 8 * 8;
	x9 = 9 * 9;
	x10 = 10 * 10;
	c0 = 0 * 0 * 0;
	c1 = 1 * 1 * 1;
	c2 = 2 * 2 * 2;
	c3 = 3 * 3 * 3;
	c4 = 4 * 4 * 4;
	c5 = 5 * 5 * 5;
	c6 = 6 * 6 * 6;
	c7 = 7 * 7 * 7;
	c8 = 8 * 8 * 8;
	c9 = 9 * 9 * 9;
	c10 = 10 * 10 * 10;
	printf("numero		cuadrado	cubo\n");
	printf("0		%d		%d\n", x0, c0);
	printf("1		%d		%d\n", x1, c1);
	printf("2		%d		%d\n", x2, c2);
	printf("3		%d		%d\n", x3, c3);
	printf("4		%d		%d\n", x4, c4);
	printf("5		%d		%d\n", x5, c5);
	printf("6		%d		%d\n", x6, c6);
	printf("7		%d		%d\n", x7, c7);
	printf("8		%d		%d\n", x8, c8);
	printf("9		%d		%d\n", x9, c9);
	printf("10		%d		%d\n", x10, c10);
	_getch();
	system("pause");
}
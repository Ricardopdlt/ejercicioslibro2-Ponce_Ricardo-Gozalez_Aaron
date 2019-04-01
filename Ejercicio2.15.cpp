//Ejercicio 2.15
//Ver el orden de ejecución de las siguientes operaciones debajo de ellas mismas

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	printf("Ver el orden de ejecucion debajo de las mismas operaciones\n");
	int x;
	x = 7 + 3 * 6 / 2 - 1;
	printf("x = 7 + 3 * 6 / 2 - 1\n");
	printf("      3   1   2   4  \n");
	printf("El resultado es:");
	cout << x << endl;
	
	int y;
	y = 2 % 2 + 2 * 2 - 2 / 2;
	printf("y = 2 mod 2 + 2 * 2 - 2 / 2\n");
	printf("       1    4   2   5   3  \n");
	printf("El resultado es:");
	cout << y << endl;

	int z;
	z = (3 * 9 * (3 + (9 * 3 / ( 3 ) ) ) );
	printf("z = (3 * 9 * (3 + (9 * 3 / ( 3 ) ) ) )\n");
	printf("       4   5    3    2   1            \n");
	printf("El resultado es:");
	cout << z << endl;

	_getch();



}
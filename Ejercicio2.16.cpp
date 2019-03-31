//Ejercicio 2.16
//Escriba un programa que pida al usuario que escriba dos números, obtenga esos dos números del usuario e imprima la suma, producto, diferencia y cociente de los dos números.

#include <stdio.h>
#include <conio.h>	

using namespace System;
using namespace std;
int main()
{
	printf("Programa que calcula las operaciones basicas con 2 numeros enteros\n");
	int x, y, r1, r2, r3, r4;
	printf("Escriba el primer numero:\n");
	scanf("%d", &x);
	printf("Escriba el segundo numero:\n");
	scanf("%d", &y);
	r1 = x + y;
	r2 = x * y;
	r3 = x - y;
	r4 = x / y;
	printf("El resultado de la suma es %d\n", r1);
	printf("El resultado de la multiplicacion es %d\n", r2);
	printf("El resultado de la resta es %d\n", r3);
	printf("El resultado de la division es %d\n",float r4);
	_getch();
}

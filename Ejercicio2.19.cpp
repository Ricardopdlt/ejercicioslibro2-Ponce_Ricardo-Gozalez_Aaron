//Ejercicio 2.19
//Escriba un programa que introduzca tres enteros desde el teclado e imprima la suma, promedio, producto, menor y  mayor de estos números.

#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
	printf("Programa que calcula suma, promedio, producto, numero mas pequeño y mas grande de 3 numeros enteros\n");
	int x, y, z, r1, r2, r3;
	printf("Escriba el primer numero:\n");
	scanf("%d", &x);
	printf("Escriba el segundo numero:\n");
	scanf("%d", &y);
	printf("Escriba el tercer numero:\n");
	scanf("%d", &z);
	r1 = x + y + z;
	r2 = (x + y + z) / 3;
	r3 = x * y*z;
	printf("La suma es %d\n", r1);
	printf("El promedio es %d\n", r2);
	printf("El producto es %d\n", r3);
	if (x < y&&x < z)
	{
		printf("El menor es %d\n", x);
	}
	else if (y < x&&y < z)
	{
		printf("El menor es %d\n", y);
	}
	else
	{
		printf("El menor es %d\n", z);
	}
	if (x > y&&x > z)
	{
		printf("El mayor es %d", x);
	}
	else if (y > x&&y > z)
	{
		printf("El mayor es %d", y);
	}
	else
	{
		printf("El mayor es %d", z);
	}
	getch();
}
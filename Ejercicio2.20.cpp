//Ejercicio 2.20
//Escriba un programa que lea el radio de un círculo como un entero e imprima el diámetro del círculo, la circunferencia y el área.Use el valor constante 3.14159 para pi.Realice todos los cálculs en intrucciones de salida.

#include <stdio.h>
#include <conio.h>
#include <float.h>

int main()
{
	printf("Programa que calcula el diametro, circunferencia y area de un circulo\n");
	int r, d;
	float pi = 3.14159, c, a;
	printf("Escriba el radio del circulo: \n");
	scanf("%d", &r);
	printf("Radio del circulo: %d\n", r);
	d = r * 2;
	printf("Diametro del circulo: %d + %d, o %d * 2\n", r, r, r);
	printf("Diametro del circulo: %d\n", d);
	c = d * pi;
	printf("Circunferencia del circulo: %d * %f\n", d, pi);
	printf("Circunferencia del circulo: %f\n", c);
	a = pi * (r*r);
	printf("Area del circulo: %f * %d^2\n", pi, r);
	printf("Area del circulo: %f\n", a);
	getch();
}
//Ejercicio 2.23
//Escriba un programa que lea cinco enteros, determine e imprima los enteros mayor y menor en el grupo.

#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Programa que muestra el numero mas pequeño y el mas grande de 5 numeros enteros\n");
	int a, b, c, d, e;
	printf("Escriba el primer numero:\n");
	scanf("%d", &a);
	printf("Escriba el segundo numero:\n");
	scanf("%d", &b);
	printf("Escriba el tercer numero:\n");
	scanf("%d", &c);
	printf("Escriba el cuarto numero:\n");
	scanf("%d", &d);
	printf("Escriba el quinto numero:\n");
	scanf("%d", &e);
	if (a < b&&a < c&&a < d&&a < e)
	{
		printf("El numero mas pequeño es %d\n", a);
	}
	else if (b < a&&b < c&&b < d&&b < e)
	{
		printf("El numero mas pequeño es %d\n", b);
	}
	else if (c < a&&c < b&&c < d&&c < e)
	{
		printf("El numero mas pequeño es %d\n", c);
	}
	else if (d < a&&d < b&&d < c&&d < e)
	{
		printf("El numero mas pequeño es %d\n", d);
	}
	else
	{
		printf("El numero mas pequeño es %d\n", e);
	}

	if (a > b&&a > c&&a > d&&a > e)
	{
		printf("El numero mas grande es %d\n", a);
	}
	else if (b > a&&b > c&&b > d&&b > e)
	{
		printf("El numero mas grande es %d\n", b);
	}
	else if (c > a&&c > b&&c > d&&c > e)
	{
		printf("El numero mas grande es %d\n", c);
	}
	else if (d > a&&d > b&&d > c&&d > e)
	{
		printf("El numero mas grande es %d\n", d);
	}
	else
	{
		printf("El numero mas grande es %d\n", e);
	}
	getch();
}
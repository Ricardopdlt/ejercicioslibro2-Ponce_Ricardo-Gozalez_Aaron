//Ejercicio 2.18
//Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario, después que imprima las palabras “es más grande”.Si los números son iguales, que imprima el mensaje “Estos números son iguales”.

#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Programa que compara 2 numeros enteros\n");
	int x, y;
	printf("Escriba el primer numero:\n");
	scanf("%d", &x);
	printf("Escriba el segundo numero:\n");
	scanf("%d", &y);
	if (x > y)
	{
		printf("%d es mas grande que %d", x, y);
	}
	else if (x < y)
	{
		printf("%d es mas grande que %d", y, x);
	}
	else
	{
		printf("Estos numeros son iguales");
	}
	getch();
}


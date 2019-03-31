//Ejercicio 2.28
//Escriba un programa que reciba como entrada de cinco d�gitos, que separe ese n�mero en sus d�gitos individuales y los impida, cada uno separado de los dem�s por tres espacios.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int digito;
	printf("Numero: ");
	scanf_s("%d", &num);
	if (num > 9999)
	{
		digito = num / 10000;
		num = num % 10000;
		printf("%d   ", digito);
		digito = num / 1000;
		num = num % 1000;
		printf("%d   ", digito);
		digito = num / 100;
		num = num % 100;
		printf("%d   ", digito);
		digito = num / 10;
		num = num % 10;
		printf("%d   %d\n", digito, num);
	}
	else
	{
		printf("El n�mero debe ser de cinco cifras\n");
	}

	system("pause");
	return 1;
}
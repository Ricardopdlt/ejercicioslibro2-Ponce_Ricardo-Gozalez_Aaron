#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

int main()
{
	printf("Como desea calcular su BMI\n");
	printf("Si desea en libras y pulgadas; escriba: 1\n");
	printf("Si desea en kg y m; escriba: 2\n");
	int x;
	cin >> x;
	if (x == 1)
	{
		printf("Ingrese su peso en libras\n");
			int y;
			cin >> y;
		printf("Ingrese su altura en pulgadas\n");
		    int z;
			cin >> z;
		int re;
		re = (y * 703) / (z * z);
		cout << "Su BMI es:" << re << "lb/pulg^2";

		printf("Valores de BMI\n");
		printf("Bajo peso: menos de 18.5\n");
		printf("Normal: entre 18.5 y 24.9\n");
		printf("Sobrepeso: entre 25 y 29.9\n");
		printf("Obeso: 30 o mas\n");

		printf("Ahora evalue su condicion y comuniquesela a su medico");
	}
	else {
		if (x == 2)
		{
			printf("Ingrese su peso en kg\n");
				int y;
				cin >> y;
			printf("Ingrese su altura en m\n");
				int z;
				cin >> z;
			int re;
			re = y / (z * z);
			cout << "Su BMI es:" << re << "kg/m^2";

			printf("Valores de BMI\n");
			printf("Bajo peso: menos de 18.5\n");
			printf("Normal: entre 18.5 y 24.9\n");
			printf("Sobrepeso: entre 25 y 29.9\n");
			printf("Obeso: 30 o mas\n");

			printf("Ahora evalue su condicion y comuniquesela a su medico");


		}
		else {
			printf("No valido");
		}
	}
	

	_getch();
}
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
		}
		else {
			printf("No valido");
		}


	
	}
		
	_getch();
}
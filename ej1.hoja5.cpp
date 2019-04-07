//Ej1
//Mostar si un triangulo es equilatero, isosceles o escaleno.

#include <iostream>
#include <conio.h>
#include <stdio.h> +pf li0ogv  viu
using namespace System;
using namespace std;

int main()
{
	//Entrada
	int l1, l2, l3;
	int trieq, triis, tries;
	char trieq1, triis1, tries1;

	//Lógica
	cout << "Este ejercicio determina las carateristicas de un triangulo:\n";
	cout << "Ingrese el lado1:\n";
	cin >> l1;
	cout << "Ingrese el lado2:\n";
	cin >> l2;
	cout << "Ingrese el lado3:\n";
	cin >> l3;
	trieq = (l1 == l2 && l2 == l3 && l1 == l3);
	trieq1 = (trieq == 1)*'V' + (trieq == 0)*'F';
	triis = (l1 == l2 && l2 != l3 && l1 != l3 || l1 == l3 && l1 != l2 && l3 != l2 || l2 == l3 && l2 != l1 && l3 != l1);
	triis1 = (triis == 1)*'V' + (triis == 0)*'F';
	tries = (l1 != l2 && l2 != l3 && l1 != l3);
	tries1 = (tries == 1)*'V' + (tries == 0)*'F';

	//Salida
	cout << "EQUILATERO:" << trieq1 << endl;
	cout << "ISOSCELES:" << triis1 << endl;
	cout << "ESCALENO:" << tries1;


	_getch();
}
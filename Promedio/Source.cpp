#include<stdio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

int mian()
{
	int num = 1, cont = 0;
	float suma = 0;

	while (num != 0)
	{
		cout << "Introduzcan un numero: " << endl;
		cin >> num;
		suma = suma + num;
		if (num != 0)
		{
			cont = cont + 1;
		}
	}
	cout << "La media es: " << suma / cont << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
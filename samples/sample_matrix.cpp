// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
#include <string>
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
	cout << "Введите размер матриц" << endl;
	int n;
	cin >> n;
	TMatrix<double> a(n), b(n);
	cout << "Введите элементы" << endl;
	cin >> a;
	cin >> b;
	while (true)
	{
		cout << "Введите операцию" << endl;
		string s;
		cin >> s;
		if (s == "STOP")
		{
			break;
		}
		else if (s == "+")
		{
			cout << a + b;
		}
		else if (s == "-")
		{
			cout << a - b;
		}
		else if (s == "==")
		{
			cout << (a == b) << endl;
		}
		else if (s == "=>")
		{
			a = b;
		}
		else if (s == "<=")
		{
			b = a;
		}
		else
		{
			cout << "Неизвестная операция" << endl;
		}
	}
}
//---------------------------------------------------------------------------

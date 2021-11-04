// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
#include <string>
//---------------------------------------------------------------------------

void main()
{
  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;
	cout << "������� ������ ������" << endl;
	int n;
	cin >> n;
	TMatrix<double> a(n), b(n);
	cout << "������� ��������" << endl;
	cin >> a;
	cin >> b;
	while (true)
	{
		cout << "������� ��������" << endl;
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
			cout << "����������� ��������" << endl;
		}
	}
}
//---------------------------------------------------------------------------

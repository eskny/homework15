#include <iostream>

//������� ������� ������/�������� ����� �� 0 �� N � ������������ �� ����������
void Func(bool x, int N)
{
	for (int a = 0; a <= N; a++)
	{
		int b = a % 2;

		switch (x)
		{
		case true:
			if (b == 0)
			{
				std::cout << a << "\n"; // ���� �������� TRUE ������� ������ �����
			}
			break;

		case false:
			if (b != 0)
			{
				std::cout << a << "\n"; // ���� �������� FALSE ������� �������� �����
			}
			break;
		}
	}
}
#include <iostream>
#include "Func.h"

int main()
{
	const int N = 100;

	for (int a = 0; a <= N; a++)
	{ 
		int b = a % 2;
		
		if (b == 0)
		{
			std::cout << a << "\n"; // ������� ��� ������ ����� �� 0 �� N
		}
	}
	
	Func(0, 78);
	Func(1, 44);
}




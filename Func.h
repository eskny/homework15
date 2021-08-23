#include <iostream>

//Функция выводит четные/нечетные числа от 0 до N в зависисмости от параметров
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
				std::cout << a << "\n"; // если параметр TRUE выводит четные числа
			}
			break;

		case false:
			if (b != 0)
			{
				std::cout << a << "\n"; // если параметр FALSE выводит нечетные числа
			}
			break;
		}
	}
}
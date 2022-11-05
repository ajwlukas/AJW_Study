#include <iostream>
#include "ArrayParameter.h"

void ArrayParam(float arr[3])
{
	std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
}

void DoubleArrayParam(float arr[3][4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << std::endl;
		}
	}
}

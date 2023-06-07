#include "Ex_Goto.h"

void Func1()
{
here:

	int c = 10;
}

void Func2()
{
here:


	int c = 10;

}


void Ex_Goto::main()
{

	{

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				goto here;
			}
		}

	here:

		int a;
	}


	{


		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				goto here;
			}
		}

	here:

		int a;


	}


	return;
}
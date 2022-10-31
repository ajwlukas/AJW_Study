#include "ExampleManager.h"

#include "Test.h"
#include "Ex_Observer.h"
#include "Ex_FunctionPointer.h"
#include "Ex_ObserverWithFunctional.h"

int main()
{
	ExampleManager exManager;

	exManager.AddExample<TestExample>();
	exManager.AddExample<Ex_Observer>();
	exManager.AddExample<Ex_FunctionPointer>();
	exManager.AddExample<Ex_ObserverWithFunctional>();

	exManager.ExecuteLastExample();

	/*float arrIn[3] = { 1,2,3 };

	float doubleArr[3][4]
		=
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	ArrayParam(arrIn);

	DoubleArrayParam(doubleArr);*/

	return 0;
}
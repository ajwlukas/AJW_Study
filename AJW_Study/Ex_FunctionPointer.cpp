#include "Ex_FunctionPointer.h"

#include <Windows.h>
#include <iostream>
#include <functional>

using namespace std;

class Monitor
{
public:
	void OnResize(UINT width, UINT height)
	{
		cout << "모니터 가로 : " << width << endl << "모니터 세로 : " << height << endl;
	}
};

void OnResize(UINT width, UINT height)
{
	cout << width << endl << height << endl;
}

void Ex_FunctionPointer::main()
{
	function<void(UINT, UINT)> func;

	func = [](UINT width, UINT height) { OnResize(width, height); };

	func(1,2);

	Monitor monitor;

	func = [&](UINT width, UINT height) { monitor.OnResize(width, height); };

	func(2, 3);
}

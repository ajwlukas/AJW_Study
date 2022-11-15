#include "Ex_FunctorSize.h"

#include <Windows.h>
#include <iostream>
#include <functional>

using namespace std;

class Monitor
{
public:
	function<void()> func;
};

void Ex_FunctorSize::main()
{
	cout << sizeof(Monitor) << endl;// 64
	cout << sizeof(function<void()>) << endl;// 64

}
/*
	functor는 사이즈가 있을까 궁금해서 찍어봤는데... 64바이트 인디요? 엄청 크네
*/

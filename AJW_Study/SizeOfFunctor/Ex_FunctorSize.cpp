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
	functor�� ����� ������ �ñ��ؼ� ���ôµ�... 64����Ʈ �ε��? ��û ũ��
*/

#pragma once

#include "IExample.h"

class Ex_FunctionPointer : public IExample
{
public:
	Ex_FunctionPointer() : IExample("FunctionPointer", "221028") {}

	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
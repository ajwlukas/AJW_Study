#pragma once

#include "IExample.h"

class Ex_FunctorSize : public IExample
{
public:
	Ex_FunctorSize() : IExample("FunctionPointer", "221115") {}

	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
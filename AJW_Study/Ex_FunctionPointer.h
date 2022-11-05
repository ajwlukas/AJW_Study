#pragma once

#include "IExample.h"

class Ex_FunctionPointer : public IExample
{
public:
	Ex_FunctionPointer() : IExample("FunctionPointer", "221028") {}

	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
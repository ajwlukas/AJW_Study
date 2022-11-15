#pragma once

#include "IExample.h"

class Ex_FunctorSize : public IExample
{
public:
	Ex_FunctorSize() : IExample("FunctionPointer", "221115") {}

	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
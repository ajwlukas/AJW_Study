#pragma once

#include "IExample.h"

class Ex_ObserverWithFunctional : public IExample
{
public:
	Ex_ObserverWithFunctional() : IExample("ObserverPatternWithFunctional", "221028_1") {}

	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
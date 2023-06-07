#pragma once

#include "IExample.h"

class Ex_Goto : public IExample
{
public:
	Ex_Goto() : IExample("GoTo", "230607") {}

	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
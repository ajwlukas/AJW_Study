#pragma once

#include "IExample.h"

class TestExample : public IExample
{
public:
	TestExample() : IExample("Test", "221027") {}
	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
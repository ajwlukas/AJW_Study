#pragma once

#include "IExample.h"

class Ex_Observer : public IExample
{
public:
	Ex_Observer() : IExample("ObserverPattern", "221027_1") {}

	// IExample을(를) 통해 상속됨
	virtual void main() override;
};
#pragma once

#include "IExample.h"

class Ex_ObserverWithFunctional : public IExample
{
public:
	Ex_ObserverWithFunctional() : IExample("ObserverPatternWithFunctional", "221028_1") {}

	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
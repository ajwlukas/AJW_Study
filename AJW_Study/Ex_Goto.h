#pragma once

#include "IExample.h"

class Ex_Goto : public IExample
{
public:
	Ex_Goto() : IExample("GoTo", "230607") {}

	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
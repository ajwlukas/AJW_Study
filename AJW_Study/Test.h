#pragma once

#include "IExample.h"

class TestExample : public IExample
{
public:
	TestExample() : IExample("Test", "221027") {}
	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
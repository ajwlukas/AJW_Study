#pragma once

#include "IExample.h"

class Ex_Observer : public IExample
{
public:
	Ex_Observer() : IExample("ObserverPattern", "221027_1") {}

	// IExample��(��) ���� ��ӵ�
	virtual void main() override;
};
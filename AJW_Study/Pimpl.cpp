#include "Pimpl.h"

class Pimpl::Impl
{
public:
	void RaiseArm()
	{

	}

	void Yell()
	{

	}

};

Pimpl::Pimpl()
{
}

Pimpl::~Pimpl()
{
}

void Pimpl::RaiseArmAndYell()
{
	pimpl->RaiseArm();
	pimpl->Yell();
}

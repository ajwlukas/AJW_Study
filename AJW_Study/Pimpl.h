#pragma once

#include <memory>

class Pimpl
{
public:
	Pimpl();
	~Pimpl();

	void RaiseArmAndYell();

private:
	class Impl;
	std::unique_ptr<Impl> pimpl;
};
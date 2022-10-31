#pragma once

#include <string>

class IExample
{
public:
	IExample(std::string exampleName, std::string date)
		:exampleName(exampleName), date(date)
	{}
	virtual void main() = 0;

	const std::string& GetDate() { return date; }

protected:
	std::string exampleName = {};
	std::string date = {};
};
#pragma once

#include "IExample.h"

#include <vector>

class ExampleManager
{
public:
	template <typename T>
	void AddExample();
	void ExecuteLastExample();

private:
	std::vector<IExample*> examples;
};

template<typename T>
inline void ExampleManager::AddExample()
{
	examples.push_back(new T());
}

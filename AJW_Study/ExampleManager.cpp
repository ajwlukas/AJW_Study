#include "ExampleManager.h"

#include <assert.h>

void ExampleManager::ExecuteLastExample()
{
	assert(!examples.empty());

	IExample* last = examples.front();

	
	for (IExample* example : examples)
	{
		last = strcmp(example->GetDate().c_str(), last->GetDate().c_str()) >= 0 ? example : last;
	}

	last->main();
}

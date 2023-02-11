#include "TaskManager.h"

void TaskManager::Create()
{
	std::unique_ptr<Task> task = std::make_unique<Task>();

	tasks.emplace_back(task);
}

void TaskManager::Delete(int elementNum)
{
	auto element = tasks.begin();
	for (int i = 0; i < elementNum; i++)
	{
		element++;
	}
	tasks.erase(element);
}

void TaskManager::Init()
{
}

void TaskManager::Update()
{
}

void TaskManager::Draw()
{
}


#include "Manager.h"

//void ManagerEdit::Create()
//{
//	std::unique_ptr<Manager> task = std::make_unique<Manager>();
//
//	managers.emplace_back(task);
//}

void ManagerEdit::Delete(const int& elementNum)
{
	auto element = managers.begin();
	for (int i = 0; i < elementNum; i++)
	{
		element++;
	}
	managers.erase(element);
}

void ManagerEdit::SetID(const int& elementNum, const int& id)
{
	auto element = managers.begin();
	for (int i = 0; i < elementNum; i++)
	{
		element++;
	}
	element->get()->SetId(id);

}

void ManagerEdit::SetManager(const int& elementNum, const std::string& name)
{
	auto element = managers.begin();
	for (int i = 0; i < elementNum; i++)
	{
		element++;
	}
	element->get()->SetManager(name);
}

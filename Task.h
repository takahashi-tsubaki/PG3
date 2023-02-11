#pragma once

#include "ID.h"
#include "Manager.h"
#include "Title.h"
#include "Content.h"
#include "Priority.h"
#include "Deadline.h"
#include "Status.h"

//タスククラス
class Task
{

public:

	void SetTask(const std::string& typeName);

private:

	Id id;
	Manager manager;
	Title title;
	Content content;
	Priority priority;
	DeadLine deadLine;
	Status status;
};


#include "Task.h"

void Task::SetTask(const std::string& typeName)
{
	if (typeName == "Completion" || typeName == "����")
	{
		status.SetStatus(Status::StatusType::Completion);
	}
	else if (typeName == "Incomplete" || typeName == "������")
	{
		status.SetStatus(Status::StatusType::Incomplete);
	}
}

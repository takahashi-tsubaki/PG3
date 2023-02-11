#include "Task.h"

void Task::SetTask(const std::string& typeName)
{
	if (typeName == "Completion" || typeName == "Š®—¹")
	{
		status.SetStatus(Status::StatusType::Completion);
	}
	else if (typeName == "Incomplete" || typeName == "–¢Š®—¹")
	{
		status.SetStatus(Status::StatusType::Incomplete);
	}
}

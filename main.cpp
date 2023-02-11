#include "Windows.h"
#include "TaskManager.h"

int main()
{
	TaskManager taskManagiment;

	while (true)
	{
		taskManagiment.Create();
	}

	system("pause");
	return 0;
}
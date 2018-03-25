#include "debug.h"
#include "task.h"

int demoTask()
{
    print("Run demo task\n");
}

int main()
{
    print("Welcome to Rocos!\n");
    Task taskManager;
    taskManager.taskId = 0;
    taskManager.run = &TaskManager;
    taskManager.run();
    return 0;
}
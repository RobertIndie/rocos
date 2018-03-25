#pragma once

typedef struct
{
    int taskId;
    void (*run)();
}Task;

void TaskManager();
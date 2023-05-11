#include "task.h"

Task::Task()
{
}

Task::~Task()
{
}
    
Task::Task(string taskName, int dueDate)
{
    this->taskName = taskName;
    this->dueDate = dueDate;
}

string Task::getTaskName()
{
    return taskName;
}

int Task::getDueDate()
{
    return dueDate;
}

void Task::setTaskName(string taskName)
{
    this->taskName = taskName;
}

void Task::setDueDate(int dueDate)
{
    this->dueDate = dueDate;
}
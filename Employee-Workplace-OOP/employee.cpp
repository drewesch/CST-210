#include "employee.h"

Employee::Employee()
{
}

Employee::~Employee()
{
}
    
Employee::Employee(string name, int id, Task *tasks)
{
    this->name = name;
    this->id = id;
    this->tasks = tasks;
    taskNum = sizeof(tasks);
}

string Employee::getName()
{
    return name;
}

int Employee::getID()
{
    return id;
}

Task* Employee::getTasks()
{
    return tasks;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setID(int id)
{
    this->id = id;
}

void Employee::setTasks(Task *tasks)
{
    this->tasks = tasks;
}

void Employee::printTasks()
{
    sizeof(tasks) == 0 ? cout << "There are no more tasks!" << endl : cout << "Pending tasks:" << endl;

    for (int i = 0; i < taskNum; i++) {
        cout << "Task #" << i << ": " << tasks[i].getTaskName() << ", due " << tasks[i].getDueDate() << endl;
    }
}

void Employee::completeTask()
{
    sizeof(tasks) == 0 ? cout << "There are no more tasks!" << endl : cout << "Completing the next task..." << endl;
    
    Task* newTasks;
    newTasks = new Task[taskNum-1];

    for (int i = 0; i < taskNum-1; i++) {
        cout << "This Task: " << tasks[i].getTaskName() << ", due " << tasks[i].getDueDate() << endl;
        newTasks[i] = tasks[i];
    }

    tasks = newTasks;
    taskNum -= 1;

    cout << "Done!" << endl;
    printTasks();
}
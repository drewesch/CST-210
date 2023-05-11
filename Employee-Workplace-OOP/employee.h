#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "task.h"
#include <string>
#include <iostream>

using namespace std;

class Employee
{
    private:
    string name;
    int id;
    Task* tasks;
    int taskNum;
    
    public:
    Employee();
    ~Employee();
    
    Employee(string name, int id, Task *tasks);
    
    string getName();
    int getID();
    Task* getTasks();
    
    void setName(string name);
    void setID(int id);
    void setTasks(Task* tasks);

    void printTasks();
    void completeTask();
};

#endif
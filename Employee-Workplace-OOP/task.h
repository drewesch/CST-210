#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task
{
    private:
    string taskName;
    int dueDate;
    
    public:
    Task();
    ~Task();
    
    Task(string taskName, int dueDate);
    
    string getTaskName();
    int getDueDate();
    
    void setTaskName(string taskName);
    void setDueDate(int dueDate);
};

#endif
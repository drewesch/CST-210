#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include "employee.h"
#include "task.h"

using namespace std;

int main() {
    Task* newTasks;
    int taskNum = 3;
    newTasks = new Task[taskNum];

    for (int i = 0; i < taskNum; i++) {
        string name = to_string(rand()%100);
        int dueDate = time(0)+rand()%100;

        Task t(name, dueDate);
        newTasks[i] = t;
    }

    Employee e1 = Employee("Bob", (rand()%100000), newTasks);

    e1.printTasks();
    for (int i = 0; i < taskNum; i++) {
        e1.completeTask();
    }
    e1.printTasks();
}
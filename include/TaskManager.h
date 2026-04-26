#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"
#include "Observer.h"

class TaskManager {
private:
    std::vector<Task> tasks;
    std::vector<Observer*> observers;

    TaskManager();

    void notifyObservers(const std::string& message);

public:
    TaskManager(const TaskManager&) = delete;
    TaskManager& operator=(const TaskManager&) = delete;

    static TaskManager& getInstance();

    void addObserver(Observer* observer);

    void addTask(const Task& task);
    void showAllTasks() const;
    const std::vector<Task>& getTasks() const;
};

#endif
#ifndef APPFACADE_H
#define APPFACADE_H

#include "TaskManager.h"
#include "TotalTimeStrategy.h"
#include "CompletedTasksStrategy.h"
#include "ReportFactory.h"

class AppFacade {
private:
    TaskManager& manager;

public:
    AppFacade();

    void addTask(const Task& task);
    void showTasks() const;
    void showStatistics() const;
    void createReports() const;
};

#endif
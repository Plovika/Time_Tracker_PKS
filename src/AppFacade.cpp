#include "AppFacade.h"

AppFacade::AppFacade() : manager(TaskManager::getInstance()) {}

void AppFacade::addTask(const Task& task) {
    manager.addTask(task);
}

void AppFacade::showTasks() const {
    manager.showAllTasks();
}

void AppFacade::showStatistics() const {
    TotalTimeStrategy totalTimeStrategy;
    CompletedTasksStrategy completedTasksStrategy;

    totalTimeStrategy.calculate(manager.getTasks());
    completedTasksStrategy.calculate(manager.getTasks());
}

void AppFacade::createReports() const {
    auto dayReport = ReportFactory::createReport("day");
    auto weekReport = ReportFactory::createReport("week");

    if (dayReport) {
        dayReport->generate();
    }

    if (weekReport) {
        weekReport->generate();
    }
}
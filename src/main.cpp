#include <iostream>
#include "AppFacade.h"
#include "ConsoleNotifier.h"

int main() {
    TaskManager& manager = TaskManager::getInstance();

    ConsoleNotifier notifier;
    manager.addObserver(&notifier);

    AppFacade app;

    Task t1(1, "Учеба", "Сделать практику");
    Task t2(2, "Работа", "Написать код");

    t1.addSpentMinutes(40);
    t2.addSpentMinutes(25);

    t1.markCompleted();

    app.addTask(t1);
    app.addTask(t2);

    app.showTasks();
    app.showStatistics();
    app.createReports();

    return 0;
}
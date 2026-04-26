#include <iostream>
#include "TaskManager.h"

TaskManager::TaskManager() {}

TaskManager& TaskManager::getInstance() {
    static TaskManager instance;
    return instance;
}

void TaskManager::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void TaskManager::notifyObservers(const std::string& message) {
    for (auto observer : observers) {
        observer->update(message);
    }
}

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
    notifyObservers("Добавлена новая задача: " + task.getTitle());
}

void TaskManager::showAllTasks() const {
    for (const auto& task : tasks) {
        std::cout << "ID: " << task.getId() << std::endl;
        std::cout << "Название: " << task.getTitle() << std::endl;
        std::cout << "Описание: " << task.getDescription() << std::endl;
        std::cout << "Время: " << task.getSpentMinutes() << " минут" << std::endl;
        std::cout << "Выполнена: " << task.isCompleted() << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}
const std::vector<Task>& TaskManager::getTasks() const {
    return tasks;
}
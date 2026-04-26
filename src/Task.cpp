#include "Task.h"

Task::Task(int id, std::string title, std::string description) {
    this->id = id;
    this->title = title;
    this->description = description;
    this->completed = false;
    this->spentMinutes = 0;
}

int Task::getId() const {
    return id;
}

std::string Task::getTitle() const {
    return title;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::isCompleted() const {
    return completed;
}

int Task::getSpentMinutes() const {
    return spentMinutes;
}

void Task::markCompleted() {
    completed = true;
}

void Task::addSpentMinutes(int minutes) {
    spentMinutes += minutes;
}
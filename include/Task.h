#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string>

class Task {
private:
    int id;
    std::string title;
    std::string description;
    bool completed;
    int spentMinutes;

public:
    Task(int id, std::string title, std::string description);

    int getId() const;
    std::string getTitle() const;
    std::string getDescription() const;
    bool isCompleted() const;
    int getSpentMinutes() const;

    void markCompleted();
    void addSpentMinutes(int minutes);
};

#endif

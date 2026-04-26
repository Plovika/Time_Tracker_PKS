#ifndef COMPLETEDTASKSSTRATEGY_H
#define COMPLETEDTASKSSTRATEGY_H

#include <iostream>
#include "StatisticsStrategy.h"

class CompletedTasksStrategy : public StatisticsStrategy {
public:
    void calculate(const std::vector<Task>& tasks) override {
        int count = 0;

        for (const auto& task : tasks) {
            if (task.isCompleted()) {
                count++;
            }
        }

        std::cout << "Количество выполненных задач: " << count << std::endl;
    }
};

#endif
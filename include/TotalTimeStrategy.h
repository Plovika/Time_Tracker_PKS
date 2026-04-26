#ifndef TOTALTIMESTRATEGY_H
#define TOTALTIMESTRATEGY_H

#include <iostream>
#include "StatisticsStrategy.h"

class TotalTimeStrategy : public StatisticsStrategy {
public:
    void calculate(const std::vector<Task>& tasks) override {
        int total = 0;

        for (const auto& task : tasks) {
            total += task.getSpentMinutes();
        }

        std::cout << "Общее затраченное время: " << total << " минут" << std::endl;
    }
};

#endif
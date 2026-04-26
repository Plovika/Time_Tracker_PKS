#ifndef STATISTICSSTRATEGY_H
#define STATISTICSSTRATEGY_H

#include <vector>
#include "Task.h"

class StatisticsStrategy {
public:
    virtual void calculate(const std::vector<Task>& tasks) = 0;
    virtual ~StatisticsStrategy() = default;
};

#endif
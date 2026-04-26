#ifndef DAYREPORT_H
#define DAYREPORT_H
#include <iostream>
#include "Report.h"

class DayReport : public Report {
public:
    void generate() override {
        std::cout << "Отчёт за день создан" << std::endl;
    }
};

#endif
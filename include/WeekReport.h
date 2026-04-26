#ifndef WEEKREPORT_H
#define WEEKREPORT_H

#include "Report.h"

class WeekReport : public Report {
public:
    void generate() override {
        std::cout << "Отчёт за неделю создан" << std::endl;
    }
};

#endif
#ifndef REPORTFACTORY_H
#define REPORTFACTORY_H

#include <memory>
#include <string>
#include "Report.h"
#include "DayReport.h"
#include "WeekReport.h"

class ReportFactory {
public:
    static std::unique_ptr<Report> createReport(const std::string& type) {
        if (type == "day") {
            return std::make_unique<DayReport>();
        }
        else if (type == "week") {
            return std::make_unique<WeekReport>();
        }
        return nullptr;
    }
};

#endif
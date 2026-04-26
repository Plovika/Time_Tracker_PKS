#ifndef REPORT_H
#define REPORT_H


class Report {
public:
    virtual void generate() = 0;
    virtual ~Report() = default;
};

#endif
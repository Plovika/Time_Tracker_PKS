#ifndef CONSOLENOTIFIER_H
#define CONSOLENOTIFIER_H

#include <iostream>
#include "Observer.h"

class ConsoleNotifier : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "Уведомление: " << message << std::endl;
    }
};

#endif
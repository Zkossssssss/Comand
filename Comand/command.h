#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Command {
public:
    Command();
    std::string name;
    virtual void execute() = 0;
};

#endif // COMMAND_H

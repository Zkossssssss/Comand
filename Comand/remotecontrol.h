#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include <List>
#include "command.h"
#include "nocommand.h"
#include <vector>

class RemoteControl {
protected:
    std::vector<Command*> onCommands;
    std::vector<Command*> offCommands;
public:
    RemoteControl();
    void setCommand(int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    std::string toString();
};

#endif // REMOTECONTROL_H

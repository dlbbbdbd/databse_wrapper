/**
  * @file   Command.h
  * @brief  This is a brief description.
  * @author 73954
  * @date   2021/7/25 15:49
  */

#ifndef SQLITE_WRAPPER_COMMAND_H
#define SQLITE_WRAPPER_COMMAND_H

#include "global.h"
#include "Data.h"

class Command {
private:
    string command;
    vector<Data> dataList;
};

#endif //SQLITE_WRAPPER_COMMAND_H

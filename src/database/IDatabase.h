/**
  * @file   IDatabase.h
  * @brief  This is a brief description.
  * @author 73954
  * @date   2021/7/25 12:35
  */
//
// Created by 73954 on 2021/7/25.
//

#ifndef SQLITE_WRAPPER_IDATABASE_H
#define SQLITE_WRAPPER_IDATABASE_H

#include "global.h"

namespace db {
    class IDatabase {

        int connect(string target);

        int execute();
    };
}

#endif //SQLITE_WRAPPER_IDATABASE_H

#include <iostream>

#define DB_PATH "/mnt/f/workspace/c/sqlite_wrapper/sqlite.db"

#include "database.h"
#include "global.h"
#include "Data.h"

using namespace std;
using namespace db;

int main() {
    // database db(DB_PATH);
    // db << "create table if not exists user;";

    // vector<Data> dataList = {(char)'a', (short)12, 123, 12345678912345, (float)12.5, 123.546};
    vector<Data> dataList;
    dataList.emplace_back((unsigned char)'a');
    dataList.emplace_back((short)12);
    dataList.emplace_back(123);
    dataList.emplace_back(12345678912345);
    dataList.emplace_back((float)12.5);
    dataList.emplace_back(123.5);
    dataList.emplace_back("是不是");
    dataList.emplace_back(string("就是"));

    vector<string> v = {"1", "2", "3", "4", "5"};
    vector<Data> d = {Data(1), Data(2), Data(3), Data(4)};

    for(const Data& data : dataList) {
        cout << data << endl;
    }

    return 0;
}

#ifndef CONSTSTRINGDATA_H
#define CONSTSTRINGDATA_H
#include <map>
#include "ir/value.h"
#include <sstream>

class ConstStringData
{
public:
    ConstStringData();

    const std::string &getLabel(ir::Value *val);
    std::stringstream TranslateTable();
    int getDataSize();

private:
    std::map<ir::Value*, std::string> table;
    int datasize;
};

#endif // CONSTSTRINGDATA_H

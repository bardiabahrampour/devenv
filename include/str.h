#pragma once
#include <stdlib.h>

struct str{
    char* base_arr;
    unsigned int size = sizeof(base_arr);

    void clear();
    str operator=(const char* parm);
    const char* cstr();
    ~str();
private:
    void kill(char **str);
};
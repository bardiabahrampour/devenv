#include <str.h>

void
str::clear(){
    this->kill(&base_arr);
}

str
str::operator=(const char* parm){
    base_arr = (char*)parm;
    return *this;
}

str::~str(){
    this->kill(&base_arr);
}

void
str::kill(char **str){
    free(*str);
    *str = nullptr;
}

const char*
str::cstr(){
    return (const char*)base_arr;
}
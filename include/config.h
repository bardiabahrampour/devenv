#pragma once
#include <str.h>

typedef enum{
    LANG_CXX,
    LANG_C,
    LANG_PY,
    LANG_PYPY,
    LANG_GO,
}lang;

struct {
    lang g_lang;
}config;
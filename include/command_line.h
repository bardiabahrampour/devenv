#pragma once
#include "../include/io.h"
#include <map>
#include <string>

class Shell{
  void eval_input(std::string &stream);
  std::string input{};
  void add_commands();
  void error(std::string what);
  std::map<const char*, _void> funcs_no_param;
  std::map<const char*, _void_str> funcs_str_param;
};

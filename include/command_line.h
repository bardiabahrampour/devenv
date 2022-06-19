#pragma once
#include <io.h>
#include <map>

class Shell{
  void eval_input(std::string &stream);
  std::string input{};
  void add_commands();
  void error(std::string what);
  std::map<std::string, _void> funcs_no_param;
  std::map<std::string, _void_str> funcs_str_param;
};

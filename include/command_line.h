#pragma once
#include <io.h>


class Shell{
  chaiscript::ChaiScript input_command;
  void eval_input(std::string &stream);
  std::string input();
  void add_commands();
  void error(std::string what);
};

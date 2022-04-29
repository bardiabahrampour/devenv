#pragma once
#include <io.h>
#include <3rdparty/chaiscript/chaiscript.hpp>

class Shell{
  chaiscript::ChaiScript input_command;
  void eval_input(std::string &stream);
  std::string input();
  void add_commands();
  void error(std::string what);
};
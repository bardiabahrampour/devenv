#include <iostream>
#include <command_line.h>
#include <exception>

void
Shell::add_commands(){
  using chaiscript::fun;
  using namespace cmd;
  
  input_command.add(fun(&echo), "echo");
  input_command.add(fun(&help), "help");
  input_command.add(fun(&newf), "newfile");
  input_command.add(fun(&deletef), "deletefile");
  input_command.add(fun(&blacklist), "blacklist");
  input_command.add(fun(&addf), "addfile");
  input_command.add(fun(&adddir), "adddir");
  input_command.add(fun(&newddir), "newddir");
  input_command.add(fun(&clear), "clear");
}

std::string
Shell::input(){
  std::string input;
  std::getline(std::cin, input);
  return input;
}

void
Shell::error(std::string what){
  std::cout << RED << "Error: "<< what << WHITE <<'\n';  
}

void
Shell::eval_input(std::string &stream){
  input_command.eval(this->input());
}

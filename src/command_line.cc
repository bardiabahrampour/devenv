#include <iostream>
#include <command_line.h>
#include <exception>

void
Shell::add_commands(){
  using namespace chaiscript;
  this->input_command.add(fun(cmd::echo), "echo");
  this->input_command.add(fun(cmd::help), "help");
  this->input_command.add(fun(cmd::newf), "newfile");
  this->input_command.add(fun(cmd::deletef), "deletefile");
  this->input_command.add(fun(cmd::blacklist), "blacklist");
  this->input_command.add(fun(cmd::addf), "addfile");
  this->input_command.add(fun(cmd::adddir), "adddir");
  this->input_command.add(fun(cmd::newddir), "newddir");
  this->input_command.add(fun(cmd::clear), "clear");
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

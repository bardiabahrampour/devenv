#include <iostream>
#include "../include/command_line.h"
#include <exception>

void
Shell::add_commands(){
  //TODO: add functions
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

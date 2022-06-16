#pragma once

#include <functional>
typedef std::function<void(const std::string&)> _void_str 
typedef std::function<void(void)> _void

//colors for output text
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define WHITE   "\x1b[0m"

//strings for output
#define CLEAR   "\033[2J\033[1;1H"
#define PROMPT  "(devenv) "
#define HELP    "NOT COMPLETED YET\n"
#define VERSION "OpenDev Pre-Alpha 0.0.1\n"



namespace cmd{
   void     echo(const char* str,const char* color);
  _void_str echo(const char* str);
  _void     help();
  _void_str newf(const char* filename);
  _void_str removef(const char* filename);
  _void_str addf(const char* filename);
  _void_str newdir(const char* name);
  _void_str adddir(const char* name);
  _void     clear();
  _void     version();
  _void_str list_files_dir(const char* dir);
  _void_str list_files(const char* dir);
};

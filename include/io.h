#ifndef IO_H
#define IO_H
#include <iostream>
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
#define  CLEAR   "\033[2J\033[1;1H"
#define  PROMPT  "(devenv) "
#define  HELP    "NOT COMPLETED YET\n"
#define  VERSION "OpenDev Pre-Alpha 0.0.1\n"

namespace cmd{
  void echo(const char* str,const char* color);
  void echo(const char* str);
  void help();
  void newf(const char* filename);
  void removef(const char* filename);
  //void blacklist(const char* filename);
  void addf(const char* filename);
//void open(const char* filename);
  void newdir(const char* name);
  void adddir(const char* name);
  void clear();
  void quit();
  void version();
  const char* list_files(const char* dir);
};

#endif //IO_H

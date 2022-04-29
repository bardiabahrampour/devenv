#ifndef PROJECT_H
#define PROJECT_H
#include <vector>
#include <string>
//define project properties and values

struct{
  std::string name;
  std::vector<std::string> files/*,blacklist*/;
}g_project;

#endif //PROJECT_H

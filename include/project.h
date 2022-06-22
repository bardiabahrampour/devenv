#ifndef PROJECT_H
#define PROJECT_H
#include <vector>
#include <string>
//define project properties and values

enum class Language{
  Cpp,
  C,
  CSharp,
  ObjectiveC,
  Asm,
  Python,
  Ruby,
  Perl,
  Java,
  Javascript,
  Kotlin,
  Go,
  //...
};

/*
  Cureent working project properties,
  NOTE: opendev can only work with
  one project at runtime.
 */
struct{
  std::string name;
  std::vector<std::string> files;
  int min_ver;
  std::vector<Language> langs; //languages used.
}g_project;

#endif //PROJECT_H

//opendev script accessable functions
//io.cc

#include <iostream>
#include <string>
#include <io.h>
#include <fstream>
#include <project.h>
#include <algorithm>

using namespace cmd;

/*
  print a string to the screen
 */
void echo(const char* str){
  std::cout << str << '\n';
}

/*
  color mode
 */
void echo(const char* str, const char* color){
  std::cout << color << str << WHITE << '\n';
}

/*
  help text
 */
void help(){
  echo(HELP);
}

/*
  write a file to the disk and add the
  said file to the disk.
 */
void newf(const char* filename){
  std::ofstream new_file(filename);
  new_file.close();
  g_project.files.push_back(filename);
}

/*
  removes a file from the project properties
  BUT does NOT delete the said file from the disk!
 */
void removef(const char* filename){
  int search_index = std::distance(g_project.files.begin(),
				   std::find(g_project.files.begin(),
					     g_project.files.end(),
					     std::string(filename)));
  g_project.files.erase(g_project.files.begin() + search_index);
}

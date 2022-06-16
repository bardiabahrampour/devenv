//opendev script accessable functions
//io.cc

#include <iostream>
#include <string>
#include <io.h>
#include <fstream>
#include <project.h>
#include <algorithm>
#include <filesystem>

using namespace cmd;

/*
  print a string to the screen
 */
void 
echo(const char* str){
  std::cout << str << '\n';
}

/*
  color mode
 */
void 
echo(const char* str, const char* color){
  std::cout << color << str << WHITE << '\n';
}

/*
  help text
 */
void 
help(){
  std::cout << HELP << '\n';
}

/*
  write a file to the disk and add the
  said file to the disk.
 */
void 
newf(const char* filename){
  std::ofstream new_file(filename);
  new_file.close();
  g_project.files.push_back(filename);
}

/*
  removes a file from the project properties
  BUT does NOT delete the said file from the disk!
 */
void 
removef(const char* filename){
  int search_index = std::distance(g_project.files.begin(),
				   std::find(g_project.files.begin(),
					     g_project.files.end(),
					     std::string(filename)));
  g_project.files.erase(g_project.files.begin() + search_index);
}

/*
  add an exsiting file to the whitelist
 */
void 
addf(const char* filename){
  g_project.files.push_back(filename);
}

/*
  creates a new directory on the disk
  WARNING! : does NOT add the directory to the whitelist
             since there are no files
 */
void 
newdir(const char* name){
  std::filesystem::current_path(std::filesystem::temp_directory_path());
  std::filesystem::create_directory(name);
}

/*
  adds an existing directory to the whitelist
 */
void 
adddir(const char* name){
  //iterate through every file in the said directory and add them to the whitelist
  for(const auto& current_file : std::filesystem::recursive_directory_iterator(name)){
    g_project.files.push_back(current_file);
  }
}

/*
  clears the console
 */
void 
clear(){
  std::cout << CLEAR;
}

void 
version(){
  std::cout << '\n' << VERSION << '\n';
}

void
list_files_dir(const char* dir){
  for(const auto& current_file : std::filesystem::recursive_directory_iterator(dir)){
    std::cout << current_file << "  ------  " << current_file.file_size() << '\n';
  }
}

void
list_files(const char* dir){
  std::for_each(g_project.files.begin(), g_project.files.end(), [](const std::string& str){ std::cout << str << '\n'; });
}



#include <cpputil.h>
#include <fstream>

void 
cpp::newFile(std::string name, std::string file_template){
  std::ofstream file(name.c_str());
  file << file_template;
  file.close();
}

void 
cpp::newHeader(std::string name){
  std::string template_ = "//" + name + "\n#pragma once\n";
  this->newFile(name,template_);
}

void
cpp::newSource(std::string name){
  this->newFile(name,"");
}

void
cpp::newClass(std::string name){
  std::string template_src = "#include " + '"' + name + '"' + ".h\n";
  std::string template_h = "#pragma once\nclass " + name + "{\n};\n";
  this->newFile(name,template_src);
  this->newFile(name,template_h);
}

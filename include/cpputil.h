#pragma once
#include <string>
#include <vector>

struct cpp{
    void newHeader(std::string name);    

    void newClass(std::string name);

    void newSource(std::string name);

    void compile();

    void link();

    cpp();
    ~cpp();
private:
    std::string name,include_dir,obj_dir;
    std::vector<std::string> files,options;

    void getOptions();
    void newFile(std::string name, std::string file_template);
};
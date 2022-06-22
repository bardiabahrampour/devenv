#pragma once
#include <vector>
#include <string>

#define CPP       ".cpp"
#define CPLUSPLUS ".c++"
#define CC        ".cc"
#define CXX_      ".cxx"
#define CP        ".cp"

struct{
  std::vector<std::string> files,options;
  std::string include_dir = nullptr;
}cpp_util_t;

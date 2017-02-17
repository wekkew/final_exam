#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class String_splitter {
private:
  vector<string> solution;
  string original_text;
  char splitting_char;
  string get_substring(int, int);
  bool last_element_is_empty();
  bool last_char_is_splitter();
  bool char_is_splitter(int);
public:
  String_splitter(string, char);
  vector<string> split();
};


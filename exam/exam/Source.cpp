//Create a function takes a string and a letter and splits the string 
//to an list of strings by the letter like :
//"a,bcd,e,fg" and ',' becomes["a", "bcd", "e", "fg"]

#ifndef TEST

#include "String_splitter.hpp"
#include <iostream>

int main() {

  String_splitter splitter("Greenfox|Zerda|Sparta|is|the|best|class|ever|in|GFA's|history!|that's|a|fact!", '|');
  vector<string> exam_solution = splitter.split();

  for (unsigned int i = 0; i < exam_solution.size(); i++) {
    std::cout << exam_solution[i] << std::endl;
  }

  return 0;
}

#endif // !TEST
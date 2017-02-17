#include "String_splitter.hpp"

#include <iostream>

String_splitter::String_splitter(string _text, char _split_char) {
  original_text = _text;
  splitting_char = _split_char;
}

string String_splitter::get_substring(int from, int till) {
  return original_text.substr(from, till);
}

bool String_splitter::last_element_is_empty() {
  return solution[solution.size() - 1] == "";
}

bool String_splitter::last_char_is_splitter() {
  return original_text[original_text.size() - 1] == splitting_char;
}

bool String_splitter::char_is_splitter(int index) {
  return original_text[index] == splitting_char;
}

vector<string> String_splitter::split() {
   int last_index = 0;
   int diff = 0;
   string temp = "";
   for (unsigned int i = 0; i < original_text.length(); i++) {
     if (char_is_splitter(i)) {
       diff = i - last_index;
       temp = get_substring(last_index, diff);
       solution.push_back(temp);
       last_index = i + 1;
     }
   }
   if (!last_char_is_splitter()) {
     diff = original_text.length() - last_index;
     temp = get_substring(last_index, diff);
     solution.push_back(temp);
   }
   return solution;
}


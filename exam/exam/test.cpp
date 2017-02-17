#ifdef TEST

#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "String_splitter.hpp"

TEST_CASE("String_Splitter constructor takes 2 arguments") {
  String_splitter splitter("blablabalbalab", 'l');
}

TEST_CASE("\'Splitter\' has a method split()") {
  String_splitter splitter("blalalaabalbalbalabla", 'l');
  splitter.split();
}

TEST_CASE("\'Splitter\' split() method returns a vector with the first wasnted substrings") {
  String_splitter splitter("alma|korte|cseresznye", '|');
  vector <string> solution = splitter.split();
  REQUIRE(solution[0] == "alma");
}

TEST_CASE("\'Splitter\' split() method return a vector not containing the last splitting character") {
  String_splitter splitter("alma|korte|cseresznye|", '|');
  vector <string> solution = splitter.split();
  REQUIRE(solution[0] == "alma");
  REQUIRE(solution[2] == "cseresznye");
  REQUIRE(solution.size() == 3);
}

#endif
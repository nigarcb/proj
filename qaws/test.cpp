#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include "library.h"

TEST_CASE("Test for finding number in text") {
  std::string text = "hello";
  std::string number = "104101108108111"; // ASCII для "hello"
  CHECK(find_number_in_text(text, number) == true);
}

TEST_CASE("Test for number not in text") {
  std::string text = "world";
  std::string number = "104101108108111"; // ASCII для "hello"
  CHECK(find_number_in_text(text, number) == false);
}

TEST_CASE("Test for empty text") {
  std::string text = "";
  std::string number = "104101108108111"; // ASCII для "hello"
  CHECK(find_number_in_text(text, number) == false);
}

TEST_CASE("Test for empty number") {
  std::string text = "hello";
  std::string number = "";
  CHECK(find_number_in_text(text, number) == false); // Пустое число не может быть найдено
}

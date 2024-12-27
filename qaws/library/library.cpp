# include "library.h"
#include <string>

bool find_number_in_text(const std::string &text, const std::string &number) {
  std::string ascii_representation;
  for (char c : text) {
    ascii_representation += std::to_string(static_cast<int>(c));
  }

  size_t pos = ascii_representation.find(number);
  if (pos != std::string::npos) {
    return true;
  }
  return false;
}

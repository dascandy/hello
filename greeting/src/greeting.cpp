export module greeting;
#include <string>

export std::string GetGreeting(const std::string& language) {
  if (language == "nl") return "Hallo Wereld";
  return "Hello World";
}



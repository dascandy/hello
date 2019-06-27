#include <string>
export module greeting;

export std::string GetGreeting(const std::string& language) {
  if (language == "nl") return "Hallo Wereld";
  return "Hello World";
}



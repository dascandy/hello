#define CATCH_CONFIG_MAIN
#include <catch.hpp>
import greeting;

TEST_CASE("testGreetingReturnsCorrectResult", "[language]") {
  SECTION("Valid inputs") {
    REQUIRE(GetGreeting("en") == "Hello World");
    REQUIRE(GetGreeting("nl") == "Hallo Wereld");
  }
  SECTION("Unsupported defaults to english") {
    REQUIRE(GetGreeting("zh") == "Hello World");
  }
}


#include <fmt/core.h>
#include <zlib.h>
#include <iostream>
#include <boost/version.hpp>

int main() {
  fmt::print("fmt version is {}\n"
             "zlib version is {}\n",
             FMT_VERSION, ZLIB_VERSION);
  std::cout << "Hellow World\n";
  std::cout << "Boost version is " << BOOST_LIB_VERSION << std::endl;
  return 0;
}
#include <sstream>
#include <iomanip>
#include <cctype>

class RGBToHex
{
  static void limit(int& a) {
    if (a < 0) a = 0;
    if (a > 255) a = 255;
  }
 public:
  static std::string rgb(int r, int g, int b) {
    std::stringstream ss;
    limit(r); limit(g); limit(b);
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r
       << std::setw(2) << g
       << std::setw(2) << b;
    return ss.str();
  }
};


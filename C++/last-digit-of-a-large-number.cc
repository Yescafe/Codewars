#include <string>

static const int tables[][4] = {
  {0, 0, 0, 0},
  {1, 1, 1, 1},
  {6, 2, 4, 8},
  {1, 3, 9, 7},
  {6, 4, 6, 4},
  {5, 5, 5, 5},
  {6, 6, 6, 6},
  {1, 7, 9, 3},
  {6, 8, 4, 2},
  {1, 9, 1, 9},
};

int last_digit(const std::string &str1, const std::string &str2) {
  if (str2 == "0") return 1;
  int bias = (str2.back() - '0' + (str2.size() > 1 ? *(str2.end() - 2) : 0) * 10) % 4;
  return tables[str1.back() - '0'][bias];
}


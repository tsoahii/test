// explanation of the program

#include <iostream>
#include <string>
#include <vector>

namespace {
int add(int a, int b);
}

int main() {
  int a = 5;
  int b = 6;
  int loop_count = 0;
  bool ifeellikeit = true;

  if (ifeellikeit) {
    loop_count = 10;
  }
  else {
    a = 1;
    b = 1;
    loop_count = 1;
  }

  for (int i = 0; i < loop_count; ++i) {
    std::cout << "result " << i << " --> " << add(a, b) << "\n";
    ++a;
    ++b;
  }

  // ugly formatted if
  int shit = 0;
  if (shit) {
    std::cout << "bah humbug!" << "\n";
  }
  else {
  }

  return 0;
}

namespace {
int add(int a, int b) {
  int result = 0;
  result = a + b;
  return result;
}
} // namespace

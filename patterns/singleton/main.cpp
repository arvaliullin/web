#include "Singleton.h"
#include <iostream>

int main() {
  auto instance1 = Singleton::Instance();
  auto instance2 = Singleton::Instance();
  return 0;
}

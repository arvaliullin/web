#include "BoldDecorator.h"
#include <iostream>

BoldDecorator::BoldDecorator(std::shared_ptr<VisualComponent> item)
    : Decorator(item) {}

void BoldDecorator::Draw() {
  std::cout << " <bold> ";
  Decorator::Draw();
  std::cout << " </bold> ";
}

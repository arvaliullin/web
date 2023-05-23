#include "CursiveDecorator.h"
#include <iostream>

CursiveDecorator::CursiveDecorator(std::shared_ptr<VisualComponent> item)
    : Decorator(item) {}

void CursiveDecorator::Draw() {
  std::cout << " <i> ";
  Decorator::Draw();
  std::cout << " </i> ";
}

#include "CursiveText.h"
#include <iostream>

CursiveText::CursiveText(std::shared_ptr<VisualComponent> item) : Decorator(item) {}

void CursiveText::Draw() {
  std::cout << " <i> ";
  Decorator::Draw();
  std::cout << " </i> ";
}

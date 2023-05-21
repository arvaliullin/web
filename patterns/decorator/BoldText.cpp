#include "BoldText.h"
#include <iostream>

BoldText::BoldText(std::shared_ptr<VisualComponent> item) : Decorator(item) {}

void BoldText::Draw() {
  std::cout << " <bold> ";
  Decorator::Draw();
  std::cout << " </bold> ";
}

#include "Decorator.h"

Decorator::Decorator(std::shared_ptr<VisualComponent> item) : _component(item) {}

void Decorator::Draw() {
  if (_component)
    _component->Draw();
}

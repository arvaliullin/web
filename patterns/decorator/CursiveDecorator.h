#pragma once

#include "Decorator.h"

class CursiveDecorator final : public Decorator {
public:
    CursiveDecorator(std::shared_ptr<VisualComponent> item = nullptr);
  virtual void Draw() override;
};

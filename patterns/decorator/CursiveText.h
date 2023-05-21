#pragma once

#include "Decorator.h"

class CursiveText final : public Decorator {
public:
  CursiveText(std::shared_ptr<VisualComponent> item = nullptr);
  virtual void Draw() override;
};

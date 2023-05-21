#pragma once

#include "Decorator.h"
#include <memory>

class BoldText final : public Decorator {
public:
  BoldText(std::shared_ptr<VisualComponent> item = nullptr);

public:
  virtual void Draw() override;
};

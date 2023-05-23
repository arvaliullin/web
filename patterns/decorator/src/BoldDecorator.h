#pragma once

#include "Decorator.h"
#include <memory>

class BoldDecorator final : public Decorator {
public:
    BoldDecorator(std::shared_ptr<VisualComponent> item = nullptr);

public:
  virtual void Draw() override;
};

#pragma once

#include "VisualComponent.h"
#include <memory>

class Decorator : public VisualComponent {
public:
  Decorator(std::shared_ptr<VisualComponent> item = nullptr);
  virtual ~Decorator() override = default;
  virtual void Draw() override;

private:
  std::shared_ptr<VisualComponent> _component;
};

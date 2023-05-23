#pragma once

#include "VisualComponent.h"
#include <string>

class Text final : public VisualComponent {
public:
  Text(std::string text);

public:
  virtual void Draw() override;

private:
  std::string _text;
};

#pragma once

class VisualComponent {
public:
  VisualComponent();
  virtual ~VisualComponent() = default;
  virtual void Draw() = 0;
};

#include "BoldDecorator.h"
#include "CursiveDecorator.h"
#include "Text.h"

#include <iostream>
#include <memory>

int main() {

  std::shared_ptr<VisualComponent> text(new Text("Text"));
  text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> bold_text(new BoldDecorator(text));
  bold_text->Draw();
  std::cout << std::endl;
  
  std::unique_ptr<VisualComponent> cursive_text(new CursiveDecorator(text));
  cursive_text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> cursive_bold_text(
      new CursiveDecorator(std::make_shared<BoldDecorator>(text)));
  cursive_bold_text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> bold_cursive_text(
      new BoldDecorator(std::make_shared<CursiveDecorator>(text)));
  bold_cursive_text->Draw();
  std::cout << std::endl;

  return 0;
}

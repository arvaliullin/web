#include "BoldText.h"
#include "CursiveText.h"
#include "Text.h"

#include <iostream>
#include <memory>

int main() {

  std::shared_ptr<VisualComponent> text(new Text("Text"));
  text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> bold_text(new BoldText(text));
  bold_text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> cursive_text(new CursiveText(text));
  cursive_text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> cursive_bold_text(
      new CursiveText(std::make_shared<BoldText>(text)));
  cursive_bold_text->Draw();
  std::cout << std::endl;

  std::unique_ptr<VisualComponent> bold_cursive_text(
      new BoldText(std::make_shared<CursiveText>(text)));
  bold_cursive_text->Draw();
  std::cout << std::endl;

  return 0;
}

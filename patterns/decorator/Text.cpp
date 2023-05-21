#include "Text.h"
#include <iostream>

Text::Text(std::string text) : _text{text} {}

void Text::Draw() { std::cout << _text; }

#pragma once

#include <string>
#include <vector>
#include "parser.h"

class Renderer {
public:
    std::string renderToHtml(const std::vector<Token>& tokens);
};

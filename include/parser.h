#pragma once

#include <string>
#include <vector>

enum class TokenType {
    Heading,
    Paragraph,
    Bold,
    Italic,
    CodeBlock
};

struct Token {
    TokenType type;
    std::string content;
};

class Parser {
public:
    std::vector<Token> parse(const std::string& markdown);
};

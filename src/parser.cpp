#include "parser.h"

std::vector<Token> Parser::parse(const std::string& markdown) {
    std::vector<Token> tokens;
    // A simplified parser. A real one would use regular expressions.
    if (markdown.rfind("# ", 0) == 0) {
        tokens.push_back({TokenType::Heading, markdown.substr(2)});
    } else {
        tokens.push_back({TokenType::Paragraph, markdown});
    }
    return tokens;
}

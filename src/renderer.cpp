#include "renderer.h"

std::string Renderer::renderToHtml(const std::vector<Token>& tokens) {
    std::string html;
    for (const auto& token : tokens) {
        if (token.type == TokenType::Heading) {
            html += "<h1>" + token.content + "</h1>";
        } else if (token.type == TokenType::Paragraph) {
            html += "<p>" + token.content + "</p>";
        }
    }
    return html;
} 

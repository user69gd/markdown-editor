#include "editor.h"
#include <iostream>
#include <fstream>
#include "parser.h"
#include "renderer.h"

void Editor::run() {
    std::cout << "Markdown Editor running. Type 'exit' to quit." << std::endl;
    // Basic terminal-based implementation for now.
    // In a real application, this would be a GUI loop.
    std::string line;
    while (std::getline(std::cin, line) && line != "exit") {
        textContent += line + "\n";
        Parser parser;
        Renderer renderer;
        auto tokens = parser.parse(textContent);
        std::cout << "--- Preview ---" << std::endl;
        std::cout << renderer.renderToHtml(tokens) << std::endl;
        std::cout << "---------------" << std::endl;
    }
}

void Editor::loadFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        textContent.assign((std::istreambuf_iterator<char>(file)),
                           (std::istreambuf_iterator<char>()));
        file.close();
    }
}

void Editor::saveFile(const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << textContent;
        file.close();
    }
}

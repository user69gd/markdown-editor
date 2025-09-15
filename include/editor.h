#pragma once

#include <string>

class Editor {
public:
    void run();
    void loadFile(const std::string&filename);
    void saveFile(const std::string&filename);

private:
    std::string textContent;

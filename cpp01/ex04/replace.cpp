#include "replace.hpp"

void replace(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream file(filename.c_str());
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filename);
    }

    std::stringstream ss;
    ss << file.rdbuf();
    std::string content = ss.str();

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        throw std::runtime_error("Failed to create output file: " + filename + ".replace");
    }

    outFile << content;
}
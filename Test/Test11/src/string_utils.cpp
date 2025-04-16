#include "../include/string_utils.h"

std::string ProcessString(const std::string& input) {
    if (input.empty()) return "Empty";
    return "Hello " + input;
}
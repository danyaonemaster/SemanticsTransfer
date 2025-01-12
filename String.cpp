#include "String.h"
#include <cstring>

String::String() : str(new char[80]), size(80) {
    str[0] = '\0';
}

String::String(const char* s) : size(strlen(s) + 1), str(new char[size]) {
    strcpy_s(str, size, s);
}

String::String(const String& other) : size(other.size), str(new char[size]) {
    strcpy_s(str, size, other.str);
}

String::String(String&& other) noexcept : str(other.str), size(other.size) {
    other.str = nullptr;
    other.size = 0;
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        size = other.size;
        str = new char[size];
        strcpy_s(str, size, other.str);
    }
    return *this;
}

String& String::operator=(String&& other) noexcept {
    if (this != &other) {
        delete[] str;
        str = other.str;
        size = other.size;
        other.str = nullptr;
        other.size = 0;
    }
    return *this;
}

String::~String() {
    delete[] str;
}

void String::print() const {
    if (str) std::cout << str;
    else std::cout << "String is empty";
}
#include "Array.h"

Array::Array(size_t n) : arr(new int[n]()), size(n) {}

Array::Array(const Array& other) : size(other.size), arr(new int[other.size]) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
}

Array::Array(Array&& other) noexcept : arr(other.arr), size(other.size) {
    other.arr = nullptr;
    other.size = 0;
}

Array& Array::operator=(const Array& other) {
    if (this != &other) {
        delete[] arr;
        size = other.size;
        arr = new int[size];
        for (size_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

Array& Array::operator=(Array&& other) noexcept {
    if (this != &other) {
        delete[] arr;
        arr = other.arr;
        size = other.size;
        other.arr = nullptr;
        other.size = 0;
    }
    return *this;
}

Array::~Array() {
    delete[] arr;
}

void Array::print() const {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
private:
    int* arr;
    size_t size;

public:
    Array(size_t n = 10);                    
    Array(const Array& other);               
    Array(Array&& other) noexcept;           
    Array& operator=(const Array& other);    
    Array& operator=(Array&& other) noexcept;
    ~Array();                                

    void print() const;                      
};

#endif 

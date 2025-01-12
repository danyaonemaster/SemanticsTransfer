#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
private:
    char* str;
    size_t size;

public:
    String();                                  
    String(const char* s);                     
    String(const String& other);               
    String(String&& other) noexcept;           
    String& operator=(const String& other);    
    String& operator=(String&& other) noexcept;
    ~String();                                 

    void print() const;                        
};

#endif 
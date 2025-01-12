#include "String.h"
#include "Array.h"
#include "Student.h"

int main() {
    String s1("Hello");
    String s2 = std::move(s1);
    s2.print();
    std::cout << "\n";

    Array a1(5);
    a1 = Array(3);
    a1.print();
}

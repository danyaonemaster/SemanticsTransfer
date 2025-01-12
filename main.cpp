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

    Student st1("John Doe", "2000-01-01", "123-456-789", "Tech University");
    Student st2 = std::move(st1);
    st2.print();

    return 0;
}

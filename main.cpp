#include <iostream>
#include "01_explicit/TestExplicit.h"
#include "02_unique_ptr/TestUniquePtr.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    TestExplicit::TestExplicit::demo();
    TestUniquePtr::TestUniquePtr::demo();
    return 0;
}

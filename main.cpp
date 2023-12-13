#include <iostream>

#include "c.hpp"
#include "t.hpp"

int main()
{
    int c = IT::f(1, 2);
    int c1 = IT1::f(1, 3);
    std::cout << c1 + c << "\n";
    system("pause");
}

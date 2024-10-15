#include <iostream>

int somme(int const & a, int const & b)
{
    return a + b;
}

int main()
{
    std::cout << "TD 05 - Ex 01" << std::endl;

    int a {10};

    std::cout << somme(a, 5) << std::endl;
    return 0;
}
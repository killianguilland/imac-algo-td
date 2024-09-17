#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 01" << std::endl;

    int signed val { };
    std::cout << "Entre une valeur stp : ";
    std::cin >> val;

    std::cout << val << " est " << ((val > 0) ? "positif" : "négatif") << std::endl;

    return 0;
}
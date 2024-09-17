#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 03" << std::endl;

    int signed val { 0 };

    std::cout << "Entre une valeur : ";
    std::cin >> val;
    std::cout << std::endl;

    int incrementing_value { (val % 2) ? -1 : -2 };

    while ((incrementing_value + 2) < val)
    {
        incrementing_value += 2;
        std::cout << incrementing_value << std::endl;
    }

    return 0;
}
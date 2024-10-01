#include <iostream>

int main()
{
    std::cout << "TD 02 - Ex 02" << std::endl;

    std::cout << "Entre la valeur 1 : " << std::endl;
    float val1 { 0 };
    std::cin >> val1;

    std::cout << "Entre la valeur 2 : " << std::endl;
    float val2 { 0 };
    std::cin >> val2;

    std::cout << "Entre la valeur 3 : " << std::endl;
    float val3 { 0 };
    std::cin >> val3;

    float somme { val1 + val2 + val3 };
    float moyenne { somme / 3 };

    std::cout << "Somme des trois valeurs : " << somme << std::endl;
    std::cout << "Moyenne des trois valeurs : " << moyenne << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    int unsigned my_var { 5 };

    std::cout << "TD 02 - Ex 01" << std::endl;
    std::cout << "Valeur initiale : " << my_var << std::endl;

    my_var++;

    std::cout << "Valeur incrémentée : " << my_var << std::endl;

    my_var *= 3;

    std::cout << "Valeur multipliée par 3 : " << my_var << std::endl;
    
    my_var /= 2;

    std::cout << "Valeur divisée par 2 : " << my_var << std::endl;
    return 0;
}
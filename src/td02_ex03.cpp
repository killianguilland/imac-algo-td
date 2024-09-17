#include <iostream>

int main()
{
    int unsigned my_int { 11 };

    std::cout << "TD 02 - Ex 03" << std::endl;

    std::cout << "Valeur int : " << my_int << std::endl;

    std::cout << "Valeur int / 2 : " << (my_int / 2) << std::endl;

    std::cout << "Pas précis car c'est un int -> il faudrait un float" << std::endl;

    std::cout << "Valeur int / 2.O : " << (my_int / 2.0f) << std::endl;

    std::cout << "Valeur float / 2 : " << (static_cast<float>(my_int) / 2) << std::endl;

    return 0;
}
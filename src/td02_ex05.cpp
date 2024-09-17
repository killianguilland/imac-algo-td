#include <iostream>

int main()
{

    std::cout << "Entre un nb entre 1 et 26 inclus : ";
    int nb_letter { 0 };
    std::cin >> nb_letter;

    std::cout << std::endl << "La lettre correspondante est : " << static_cast<char>(64 + nb_letter) << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 05" << std::endl;

    int signed user_value { 0 };

    while (true)
    {
        std::cout << "Entre un nombre positif : " << std::endl;

        if (std::cin >> user_value) {
            if(user_value > 0) {
                break;
            }
            else {
                std::cout << "Tu dois entrer une valeur supérieure à zéro" << std::endl;
            }
        }
        else {
            std::cout << "Nombre invalide : entre uniquement des chiffres" << std::endl;
        }
        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
    }

    // Triangle

    for (size_t i = 0; i <= user_value; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Sapin

    for (int i = -1; i <= user_value * 2; i += 2)
    {
        int space_count { user_value - i / 2 };

        for (int j = 0; j < space_count; j++)
        {
            std::cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Carré

    int space_count { user_value - 2 };

    for (int i = 0; i <= user_value; i++)
    {
        if (i == 0 or i == user_value) {
            for (int j = 0; j < user_value; j++) {
                std::cout << "*";
            }
        }
        else {
            std::cout << "*";
            for (int j = 0; j < space_count; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;
    
    return 0;
}
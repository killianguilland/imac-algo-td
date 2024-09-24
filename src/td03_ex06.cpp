#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 06" << std::endl;

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

    int current_value { user_value };

    std::cout << current_value << ", ";

    int count {1};

    while (current_value != 1)
    {
        if ((current_value % 2) != 0) {
            // impair
            current_value = (current_value * 3) + 1;
        }
        else {
            // pair
            current_value = current_value / 2;
        }

        std::cout << current_value << ", ";
        count++;
    }
    std::cout << std::endl;

    std::cout << "La suite atteint 1 au bout de " << count << " termes (incluant le terme de départ)" << std::endl;
    
    return 0;
}
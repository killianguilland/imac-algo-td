#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 04" << std::endl;

    int unsigned random_value = std::rand() % 100 + 1;

    while (true)
    {
        int signed user_value { 0 };
        std::cout << "Devine la valeur aléatoire : " << std::endl;

        if (std::cin >> user_value) {
            if(user_value == random_value) {
                std::cout << "GG" << std::endl;
                break;
            }
            else {
                std::cout << "Le nombre mystère est " << (user_value > random_value ? "inférieur" : "supérieur") << " à " << user_value << std::endl;
            }
        }
        else {
            std::cout << "Nombre invalide : entre uniquement des chiffres" << std::endl;
        }
        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
    }

    return 0;
}
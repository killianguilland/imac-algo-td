#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 03 bis" << std::endl;

    while (true)
    {
        int signed age { 0 };
        std::cout << "Entre ton age : " << std::endl;

        if (std::cin >> age) {
            if(age < 0) {
                std::cout << "Age inférieur à zéro" << std::endl;
            }
            else {
                std::cout << "Tu es " << (age >= 18 ? "majeur" : "mineur") << std::endl;
                break;
            }
        }
        else {
            std::cout << "Age invalide : entre uniquement des chiffres" << std::endl;
        }
        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
    }

    return 0;
}
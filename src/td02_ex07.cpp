#include <iostream>

int main()
{
    std::cout << "TD 02 - Ex 07" << std::endl;

    float prix_sac_patate { 1.5 * 2 };

    std::cout << "Nb de sacs de patate (" << prix_sac_patate << "€) : ";
    int nb_sac_patate { 0 };
    std::cin >> nb_sac_patate;

    float prix_carotte { 2.5 * 0.150 };

    std::cout << "Nb de carottes (" << prix_carotte << "€) : ";
    int nb_carottes { 0 };
    std::cin >> nb_carottes;

    float prix_salade { 1.2 };

    std::cout << "Nb de salades (" << prix_salade << "€) : ";
    float nb_salades { 0 };
    std::cin >> nb_salades;

    float total_patates {nb_sac_patate * prix_sac_patate};
    float total_carottes {nb_carottes * prix_carotte};
    float total_salades {nb_salades * prix_salade};

    float prix_total { total_patates + total_carottes + total_salades };

    std::cout << std::endl << "Le prix total de la commande est de " << prix_total << "€" << std::endl;
    std::cout << "- " << nb_sac_patate << " sacs de patate : " << total_patates << "€" << std::endl;
    std::cout << "- " << nb_carottes << " carottes : " << total_carottes << "€" << std::endl;
    std::cout << "- " << nb_salades << " salades : " << total_salades << "€" << std::endl;

    return 0;
}
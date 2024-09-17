#include <iostream>
#include <string>

enum class Season {
    Spring, 
    Summer, 
    Autumn,
    Winter,
};

int main()
{
    std::string hello_string { "Hello and welcome to \"IMAC\" 💃" };


    std::cout << hello_string << std::endl;
    std::cout << 42 << std::endl;

    std::cout << "Opérateurs arithmétiques :" << std::endl;
    std::cout << "Addition: 1 + 2 = " << 1 + 2 << std::endl;
    std::cout << "Soustraction: 6 - 2 = " << 6 - 2 << std::endl;
    std::cout << "Multiplication: 3.14 * 2 = " << 3.14 * 2 << std::endl;
    std::cout << "Division: 42.5 / 3.2 = " << 42.5 / 3.2 << std::endl;
    std::cout << "Modulo: 7 % 3 = " << 7 % 3 << std::endl;

    std::cout << "5 / 2 = " << 5 / 2 << std::endl;
    std::cout << "5. / 2 = " << 5. / 2 << std::endl;

    std::cout << "Associativité :" << std::endl;
    std::cout << "2 + (3 + 6) = " << 2 + (3 + 6) << std::endl;
    std::cout << "(2 + 3) + 6 = " << (2 + 3) + 6 << std::endl;
 
    std::cout << "Distributivité :" << std::endl;
    std::cout << "2 * (4 + 3) = " << 2 * (4 + 3) << std::endl;

    std::cout << "Priorité des opérateurs :" << std::endl;
    std::cout << "42 * 3 + (2 + 8 / 4) = " << 42 * 3 + (2 + 8 / 4) << std::endl;
    
    int number { 42 };
    char letter { 'A' };
    float pi { 3.1415927f };
    double pi_double { 1415926535897931 };

    int ma_variable_bizarre;
    std::cout << "Variable mystère : " << ma_variable_bizarre << std::endl;

    Season current_season { Season::Summer };

    int current_season_int { static_cast<int>(current_season) };

    std::cout << "Saison actuelle : " << current_season_int << std::endl;

    Season season { static_cast<Season>(current_season_int) };

    std::cout << "Entre ton age : " << std::endl;
    int age { 0 };
    std::cin >> age;
    std::cout << "Tu as " << age << " ans." << std::endl;

    int a { 5 };
    int result { a++ }; // result prend la valeur de a (5) puis a est incrémenté à 6.
    // Maintenant, a vaut 6 et result vaut 5.

    return 0;
}

// #include <iostream>
// int main()
// {
//     float const a { 10.0f };
//     float const b { 20.0f };

//     std::cout << a << " == " << b << " donne " << (a == b) << std::endl;
//     std::cout << a << " != " << b << " donne " << (a != b) << std::endl;
//     std::cout << a << " < " << b << " donne " << (a < b) << std::endl;
//     std::cout << a << " <= " << b << " donne " << (a <= b) << std::endl;

//     // On peut aussi stocker le résultat de la condition dans une variable booléenne
//     float const price { 24.5f };
//     bool const is_too_expensive { price >= 100.f };

//     return 0;
// }
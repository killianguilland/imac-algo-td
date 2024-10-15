#include <iostream>
#include <string>

int main() {
    std::string mot;
    std::cout << "Veuillez saisir un mot : ";
    std::cin >> mot;

    bool est_palindrome = true;
    int debut = 0;
    int fin = mot.length() - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            est_palindrome = false;
            break;
        }
        debut++;
        fin--;
    }

    if (est_palindrome) {
        std::cout << mot << " est un palindrome." << std::endl;
    } else {
        std::cout << mot << " n'est pas un palindrome." << std::endl;
    }

    return 0;
}
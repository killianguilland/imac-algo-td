#include <iostream>
#include <string>
#include <vector>

int main() {
    long long nombre;
    std::cout << "Veuillez saisir un nombre entier positif supérieur à 1 000 000 : ";
    std::cin >> nombre;

    if (nombre <= 1000000) {
        std::cout << "Le nombre doit être supérieur à 1 000 000." << std::endl;
        return 1;
    }

    std::string nombre_str = std::to_string(nombre);
    std::vector<int> compteurs(10, 0);

    for (char c : nombre_str) {
        int chiffre = c - '0';
        compteurs[chiffre]++;
    }

    int chiffre_max = 0;
    int max_occurrences = compteurs[0];

    for (int i = 1; i < 10; ++i) {
        if (compteurs[i] > max_occurrences) {
            max_occurrences = compteurs[i];
            chiffre_max = i;
        }
    }

    std::cout << "Le chiffre qui apparaît le plus souvent est " << chiffre_max 
              << " avec " << max_occurrences << " occurrences." << std::endl;

    return 0;
}
#include <iostream>
#include <cstdlib>

enum class Article { Alimentation, Vetements, Chaussures, Autre };

std::istream& operator>>(std::istream& is, Article& article)
{
    std::string articleAsString;
    is >> articleAsString;

    if (articleAsString == "Alimentation") {
        article = Article::Alimentation;
    } else if (articleAsString == "Vetements") {
        article = Article::Vetements;
    } else if (articleAsString == "Chaussures") {
        article = Article::Chaussures;
    } else if (articleAsString == "Autre") {
        article = Article::Autre;
    } else {
        is.setstate(std::ios::failbit);
    }

    return is;
}

/*
* Fonction qui prends un booléen has_card et un type d'article et retourne la réduction correspondante
*/
float get_reduction(bool has_card, Article article)
{
    float reduc { 0 };

    switch (article)
    {
        case Article::Alimentation:
            reduc = has_card ? 0.08 : 0.05;
            break; // permet de quitter le bloc switch
        case Article::Vetements:
            reduc = has_card ? 0.15 : 0.10;
            break;
        case Article::Chaussures:
            reduc = has_card ? 0.18 : 0.12;
            break;
        case Article::Autre:
            reduc = 0;
            break;
    }

    return 1 - reduc;
}

/*
* Fonction qui prends une string et la retourne en texte barré ASCII
*/
std::string strikethrough_text(std::string str) {
    return "\033[9m" + str + "\033[0m";
}

/*
* Fonction qui demande à l'utilisateur d'ajouter un article, calcule la réduction et retourne le prix final
*/
float add_article(bool has_card) {
    //// TYPE D'ARTICLE

    std::cout << "Saisis un type d'article Alimentation | Vetements | Chaussures | Autre : ";

    Article article;
    std::cin >> article;

    // On vérifie si la saisie a échoué.
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie, il faut saisir un type d'article valide (\"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\")" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        exit(EXIT_FAILURE);
    }

    //// PRIX DE L'ARTICLE

    std::cout << "Saisis le prix de l'article : ";

    unsigned int prix {};
    std::cin >> prix;

    // On vérifie si la saisie a échoué.
    if (std::cin.fail() or (prix <= 0)) {
        std::cout << "Erreur de saisie, il faut saisir un entier positif" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        exit(EXIT_FAILURE);
    }

    //// CALCUL ARTICLE

    std::cout << std::endl << "Prix de l'article : " << strikethrough_text(std::to_string(prix) + "€") << std::endl;

    float reduc {get_reduction(has_card, article)};

    std::cout << "Réduction type article : " << reduc << std::endl;

    float final_price {prix * reduc };

    std::cout << "Prix final : " << final_price << "€" << std::endl << std::endl;
    return final_price;
}

/*
* Fonction main qui demande ses infos à l'utilisateur, lui demande d'entrer tous ses articles avec une boucle puis affiche le prix final
*/
int main()
{
    bool keep_going {true};
    float total {0.0f};

    

    //// CARTE DE FIDELITE
    
    std::cout << "As-tu une carte de fidélité ? (y/n) ";

    char answer {};
    std::cin >> answer;

    if (std::cin.fail() or (answer != 'y' && answer != 'n')) {
        std::cout << "Erreur de saisie, il faut saisir y ou n" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        exit(EXIT_FAILURE);
    }

    bool has_card {answer == 'y'};

    //// AGE DE L'UTILISATEUR

    std::cout << "Entre ton âge : ";

    unsigned int age {};
    std::cin >> age;

    std::cout << std::endl;

    if (std::cin.fail() or (age <= 0)) {
        std::cout << "Erreur de saisie, il faut saisir un entier supérieur à zéro" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        exit(EXIT_FAILURE);
    }

    while (keep_going) {
        total += add_article(has_card);
        std::cout << "Tu as encore un article ? (y/n) ";

        char answer {};
        std::cin >> answer;

        std::cout << std::endl;

        if (std::cin.fail() or (answer != 'y' && answer != 'n')) {
            std::cout << "Erreur de saisie, il faut saisir y ou n" << std::endl;

            std::cin.clear(); // On remet std::cin dans un état fonctionnel.
            std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

            // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
            exit(EXIT_FAILURE);
        }

        if(answer == 'n') {
            keep_going = false;
        }
    }

    //// REDUC AGE

    if (age < 26) {
        std::cout << "Total : " << strikethrough_text(std::to_string(total) + "€") << std::endl;
        total *= 0.9;
        std::cout << "-10% car tu as moins de 26 ans " << std::endl;
        std::cout << "Nouveau total : " << total << "€" << std::endl;
    } else {
        std::cout << "Total : " << total << "€" << std::endl;
    }

    //// BON D'ACHAT

    float bon_achat {total * 0.10f};
    if(bon_achat > 30.0f) {
        bon_achat = 30.0f;
    }
    std::cout << bon_achat << "€ offerts sur ton prochain achat" << std::endl;

    return 0;
}
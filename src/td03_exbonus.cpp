#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex bonus" << std::endl;

    enum class Article { Alimentation, Vetements, Chaussures, Autre };

    // C'est un mécanisme avancé, vous n'avez pas besoin de comprendre comment ça marche.
    // On en reparlera au second semestre.
    // retenez juste que ça permet de convertir une entrée de l'utilisateur en Article.
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
    
    return 0;
}
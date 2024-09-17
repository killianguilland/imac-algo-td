#include <iostream>

int main()
{

    std::cout << "Entre un nb de jours steuplé : ";
    int nb_days { 0 };
    std::cin >> nb_days;

    // 36500 jours dans un siècle
    int days_minus_centuries { nb_days % 36500 };
    int centuries { nb_days / 36500 };

    // 360 jours dans un an
    int days_minus_years { days_minus_centuries % 360};
    int years { days_minus_centuries / 360};

    // 30 jours dans un mois
    int days_minus_months { days_minus_years % 30};
    int months { days_minus_years / 31};

    // 7 jours dans une semaine
    int days_minus_weeks { days_minus_months % 7};
    int weeks { days_minus_months / 7};

    std::cout << std::endl << nb_days << " jours correspondent à : " << centuries << " siècle(s) " << years << " année(s) " << months << " mois " << weeks << " semaine(s) " << days_minus_weeks << " jour(s) ";

    return 0;
}
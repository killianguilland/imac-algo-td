#include <iostream>

int main()
{
    std::cout << "TD 03 - Ex 02" << std::endl;

    int signed val { 0 };

    int sum { 0 };
    float count { -1.0f };

    while (val >= 0)
    {
        sum += val;
        count++;
        std::cout << "Entre une valeur : ";
        std::cin >> val;
    }

    std::cout << count;
    
    std::cout << "La somme de tous les entiers est " << sum << std::endl;
    std::cout << "La moyenne de tous les entiers est " << (sum / count) << std::endl;

    return 0;
}
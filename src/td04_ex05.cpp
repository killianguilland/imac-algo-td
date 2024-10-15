#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()
{
    std::cout << "TD 04 - Ex 05" << std::endl;

    std::vector<int> values {};

    bool keep_going {true};
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Entre un entier positif :" << std::endl;
        int val {};
        std::cin >> val;
        values.push_back(val);
    }

    for (int i: values) {
        std::cout << i << ' ';
    }

    for (size_t i = 0; i < values.size(); i++)
    {
        if(values[i] == 3) {
            values.erase(values.begin() + i);
            values.push_back(0);
        }
    }

    std::cout << "Sans les 3 : " << std::endl;

    for (int i: values) {
        std::cout << i << ' ';
    }

    //std::cout << "Nb de points d'expérience gagnés : " << std::endl;

    return 0;
}
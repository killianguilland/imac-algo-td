#include <iostream>
#include <string>
#include <vector>
#include <set>

int main()
{
    std::cout << "TD 04 - Ex 04" << std::endl;

    std::cout << "Quel niveau as-tu terminé ? " << std::endl;
    unsigned int level { 0 };
    std::cin >> level;

    std::vector<int> monsters_levels {};

    bool keep_going {true};
    while (keep_going) {
        std::cout << "De quel niveau était le monstre que tu as tué ?" << std::endl;
        int monster_level {};
        std::cin >> monster_level;
        monsters_levels.push_back(monster_level);

        std::string answer;
        std::cout << "As-tu tué un autre monstre ? (y/n)" << std::endl;
        std::cin >> answer;

        if(answer == "n") {
            keep_going = false;
        }
    }

    std::set<int> monsters_xp {};

    for(unsigned int monster_level : monsters_levels) {

        std::cout << monster_level << std::endl;

        for (unsigned int i = i; i * monster_level < level; i++)
        {
            unsigned int xp = monster_level * i; 
            std::cout << "- " << (xp) << std::endl;
            monsters_xp.insert(xp);
        }
    }

    int total_xp { 0 };

    for (unsigned int monster_xp: monsters_xp) {
        std::cout << "+ " << monster_xp << std::endl;
        total_xp += monster_xp;
    }

    std::cout << "Nb de points d'expérience gagnés : " << total_xp << std::endl;

    return 0;
}
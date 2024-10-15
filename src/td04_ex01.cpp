#include <iostream>
#include <vector>
#include <cstdlib>
#include <array>
#include <ctime>

std::string get_random_dwarf_name() {
    // std::array of 50 dwarf names
    const std::array<std::string, 50> dwarf_names = {
        "Thorin", "Balin", "Dwalin", "Kili", "Fili",
        "Dori", "Nori", "Ori", "Oin", "Gloin",
        "Bifur", "Bofur", "Bombur", "Durin", "Fundin",
        "Thrain", "Grim", "Narvi", "Vili", "Ve",
        "Frerin", "Azaghal", "Thror", "Brokk", "Sindri",
        "Skafid", "Eitri", "Gimli", "Mim", "Andvari",
        "Lofar", "Vestri", "Nordi", "Sudri", "Austri",
        "Duf", "Modi", "Nidi", "Alfr", "Onar",
        "Ymir", "Grerr", "Thrudgelmir", "Mothi", "Litr",
        "Sindri", "Bruni", "Nar", "Farin", "Gror"
    };

    int first_name_index = rand() % dwarf_names.size();

    int last_name_index = rand() % dwarf_names.size();

    return dwarf_names[first_name_index] + " " + dwarf_names[last_name_index];
}


int main()
{
    size_t const dwarf_count { 20000 };

    std::vector<int> calories {};
    std::vector<std::string> dwarves {};

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);
    
    for (int i = 0; i < dwarf_count; ++i)
    {
      calories.push_back(rand() % 24000 + 100);
      dwarves.push_back(get_random_dwarf_name());

      std::cout << dwarves[i] << " : " << calories[i] << " calories" << std::endl;
    }
    std::cout << std::endl;

    // Indices des trois plus grandes quantités de calories
    unsigned int top1_index {0};
    unsigned int top2_index {0};
    unsigned int top3_index {0};
    unsigned int smallest_calory_index {0};

    for (size_t i = 1; i < dwarf_count; i++)
    {
        if (calories[i] > calories[top1_index]) {
            top3_index = top2_index;
            top2_index = top1_index;
            top1_index = i;
        } else if (calories[i] > calories[top2_index]) {
            top3_index = top2_index;
            top2_index = i;
        } else if (calories[i] > calories[top3_index]) {
            top3_index = i;
        }
        if(calories[i] < calories[smallest_calory_index]) {
            smallest_calory_index = i;
        }
    }

    std::cout << "Top 1 : " << dwarves[top1_index] << " (" << calories[top1_index] << " calories)" << std::endl;
    std::cout << "Top 2 : " << dwarves[top2_index] << " (" << calories[top2_index] << " calories)" << std::endl;
    std::cout << "Top 3 : " << dwarves[top3_index] << " (" << calories[top3_index] << " calories)" << std::endl;
    std::cout << "Top " << dwarf_count << " : " << dwarves[smallest_calory_index] << " (" << calories[smallest_calory_index] << " calories)" << std::endl;

    // TODO: afficher la quantité de provisions la plus grande transportée par un nain

    return 0;
}
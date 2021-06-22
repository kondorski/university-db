#include "menu.hpp"
#include "Student.hpp"

std::vector<Student> universityDb;


void printDatabase (std::vector<Student>& vec) {
    for (auto& el : vec) {
        std::cout << el.get_first_name_() << " | " 
                  << el.get_last_name_() << " | " 
                  << el.get_age_() << " | " 
                  << el.get_gender_() << " | " 
                  << el.get_pesel_() << " | " 
                  << el.get_id_()
                  << '\n';
    }
}

void displayMenu() {
    std::cout << "Press 1 to add student to the database" << '\n';
    std::cout << "Press 2 to add student to delete " << '\n';
    std::cout << "Press 3 to add student to delete " << '\n';
    std::cout << "Press 4 to add student to delete " << '\n';
    std::cout << "Press 5 to add student to delete " << '\n';
}

void menu_choice(const int input) {
    switch(input){
        case 1:
            printDatabase(universityDb);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            std::cout << "Please choose from available inputs 1-5" << '\n';
    }
}
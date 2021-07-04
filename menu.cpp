#include "menu.hpp"


void displayMenu() 
{
    std::cout << "Press 1 to print all students in the database." << '\n';
    std::cout << "Press 2 to add student in the database. " << '\n';
    std::cout << "Press 3 to delete student from the database." << '\n';
    std::cout << "Press 4 to search student by last name." << '\n';
    std::cout << "Press 5 to search student by PESEL number." << '\n';
    std::cout << "Press 6 to sort student by PESEL number." << '\n';
    std::cout << "Press 7 to sort student by index number." << '\n';
}

void menu_choice(const int input) 
{
    switch(input){
        case 1:
            //printDatabase();
            break;
        case 2:
            std::cout << "Pressed 2";
            break;
        case 3:
            std::cout << "Pressed 3";
            break;
        case 4:
            std::cout << "Pressed 4";
            break;
        case 5:
            std::cout << "Pressed 5";
            break;
        default:
            std::cout << "Please choose from available inputs 1-5" << '\n';
    }
}
#pragma once

#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Database.hpp"


struct Menu{
    void menuInput (const int);
    void displayMenu();
    void menu_choice(const int& input, Database& database);
};

// void menuInput (const int);
// void displayMenu();
// void printDatabase (std::vector<Student>);
// void menu_choice(const int input);
// void addStudent (std::vector<Student>&, Student);
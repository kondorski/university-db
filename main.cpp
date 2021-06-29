#include <iostream>
#include <vector>
#include<iomanip>

#include "Student.hpp"
#include "menu.hpp"


int main () {
    Student student1 ("Zenek", "Budryn", 'm', 35, "93122412373", 100001 );
    Student student2 ("Konrad", "Kar", 'm', 31, "95050802273", 100002 );

    std::vector<Student> studentDb;

    studentDb.push_back(student1);
    studentDb.push_back(student2);

    displayMenu();
    





}
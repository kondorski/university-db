#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Student.hpp"
#include "menu.hpp"
#include "Database.hpp"


int main () 
{
    Database universityDatabase;
    std::fstream myFile;
    myFile.open("database.txt", std::ios::in);
    if(myFile.is_open())
    {
        std::string line;
        while (std::getline(myFile, line))
        {
            std::stringstream ss(line);

            std::string firstName, lastName, gender, pesel, address, index;
            std::getline(ss, firstName,',');
            std::getline(ss, lastName,',');
            std::getline(ss, gender,',');
            std::getline(ss, pesel,',');
            std::getline(ss, address,',');
            std::getline(ss, index,',');
            size_t newIndex = std::stoi(index);
            Student student (firstName, lastName, gender, pesel, address, newIndex);
            universityDatabase.addStudent(student);
        }
    }
    else
    {
        std::cout << "File not present!\n";
    }
    myFile.close();

    std::string pesel = "95050802273";
    size_t indexId = 100001;

    universityDatabase.printDatabase();
    universityDatabase.sortByPesel();
    universityDatabase.printDatabase();
    universityDatabase.sortByLastName();
    std::cout << "------------------------------------------\n";
    universityDatabase.printDatabase();
    universityDatabase.searchByLastName("Zajdel");
    std::cout << "------------------------------------------\n";
    universityDatabase.deleteStudentByIndexNumber(indexId);
    std::cout << "------------------------------------------\n";
    universityDatabase.printDatabase();
    universityDatabase.searchByPesel(pesel);
    std::cout << "------------------------------------------\n";
}
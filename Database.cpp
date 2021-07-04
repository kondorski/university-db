#include <algorithm>
#include <iostream>
#include <vector>
#include "Database.hpp"
#include "Student.hpp"

void Database::printDatabase () 
{
    std::cout << "Printing student database: \n";
    for (auto& el : universityDb_) 
    {
        printStudentInfo(el);
    }
    std::cout << "------------------------------------------\n";
}

void Database::printStudentInfo(Student& student)
{
    std::cout << student.getId() << " | "  
              << student.getFirstName() << " | " 
              << student.getLastName() << " | " 
              << student.getGender() << " | " 
              << student.getPesel() << " | " 
              << student.getAddress() << '\n'; 
}

void Database::addStudent (const Student& student)
{
    universityDb_.push_back(student);
}

void Database::searchByLastName(const std::string& name)
{
    auto searchPtr = std::find_if(universityDb_.begin(), universityDb_.end(), [&name](Student& s){ return s.getLastName() == name; });
    (searchPtr != universityDb_.end())
        ? std::cout << searchPtr->getFirstName() << " " << searchPtr->getLastName() << " is in the Database.\n"
        : std::cout << "There is no student by the name: " << name << '\n';
}

// To Do Check how to make one overloaded function with searchByLastName
void Database::searchByPesel(const std::string& pesel)
{
    auto searchPtr = std::find_if(universityDb_.begin(), universityDb_.end(), [&pesel](Student s){ return s.getPesel() == pesel; });
    if (searchPtr != universityDb_.end()){
        std::cout << "The student with PESEL number: " << pesel << " is:\n";
        printStudentInfo(*searchPtr);
    }
    else
    {
        std::cout << "There is no student by the PESEL number: " << pesel << '\n';
    }
}

void Database::deleteStudentByIndexNumber(size_t& index)
{
    auto searchPtr = std::find_if(universityDb_.begin(), universityDb_.end(), [&index](Student& s){ return s.getId() == index; });
        if (searchPtr != universityDb_.end())
        {
            universityDb_.erase(searchPtr);
            std::cout << "Student: \n";
            printStudentInfo(*searchPtr);
            std::cout << "has been deleted from the database.\n";
            universityDb_.shrink_to_fit();
        }
        else
        {
            std::cout << "There is no student by the index number: " << index << '\n';
        }
}

void Database::sortByPesel()
{
    std::sort(universityDb_.begin(), universityDb_.end(), [](Student& lhs, Student& rhs) { return lhs.getPesel() < rhs.getPesel(); });
}

void Database::sortByLastName()
{
    std::sort(universityDb_.begin(), universityDb_.end(), [](Student& lhs, Student& rhs) { return lhs.getLastName() < rhs.getLastName(); });
}



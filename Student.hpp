#pragma once

#include <string>


class Student{
public:
    std::string getFirstName();
    std::string getLastName();
    std::string getPesel();
    std::string getAddress();
    std::string getGender();
    size_t getId();

    Student (std::string firstName, std::string lastName, std::string pesel, std::string address, std::string gender, size_t id);

private:
    std::string firstName_;
    std::string lastName_;
    std::string pesel_;
    std::string address_;
    std::string gender_;
    size_t id_;
};
